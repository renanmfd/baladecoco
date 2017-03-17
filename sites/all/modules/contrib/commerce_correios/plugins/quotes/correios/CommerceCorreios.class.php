<?php

/**
 * @file
 * Correios shipping calculation controller.
 */

class CommerceCorreios extends CommerceShippingQuote {

  public function settings_form(&$form, $rules_settings) {
    $form['store_postal_code'] = array(
      '#type' => 'textfield',
      '#title' => t('Store postal code'),
      '#description' => t('Enter store location postal code. Only numbers.'),
      '#default_value' => is_array($rules_settings) && isset($rules_settings['store_postal_code']) ? $rules_settings['store_postal_code'] : '',
      '#element_validate' => array('rules_ui_element_integer_validate'),
    );
    $form['services'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Services'),
      '#description' => t('Choose what services to enable.'),
      '#options' => $this->correios_services(),
      '#default_value' => is_array($rules_settings) && isset($rules_settings['services']) ? $rules_settings['services'] : array_keys($this->correios_services()),
    );
    $form['default_weight'] = array(
      '#type' => 'textfield',
      '#title' => t('Default package weight'),
      '#description' => t('In kilograms. Enter an integer or decimal value.'),
      '#default_value' => is_array($rules_settings) && isset($rules_settings['default_weight']) ? $rules_settings['default_weight'] : 1,
      '#element_validate' => array('rules_ui_element_decimal_validate'),
    );
    $form['default_lenght'] = array(
      '#type' => 'textfield',
      '#title' => t('Default package lenght'),
      '#description' => t('Enter an integer between 16 and 60.'),
      '#default_value' => is_array($rules_settings) && isset($rules_settings['default_lenght']) ? $rules_settings['default_lenght'] : 16,
      '#element_validate' => array('rules_ui_element_integer_validate'),
    );
    $form['default_height'] = array(
      '#type' => 'textfield',
      '#title' => t('Default package height'),
      '#description' => t('Enter an integer between 2 and 60.'),
      '#default_value' => is_array($rules_settings) && isset($rules_settings['default_height']) ? $rules_settings['default_height'] : 2,
      '#element_validate' => array('rules_ui_element_integer_validate'),
    );
    $form['default_depth'] = array(
      '#type' => 'textfield',
      '#title' => t('Default package depth'),
      '#description' => t('Enter an integer between 5 and 60.'),
      '#default_value' => is_array($rules_settings) && isset($rules_settings['default_depth']) ? $rules_settings['default_depth'] : 5,
      '#element_validate' => array('rules_ui_element_integer_validate'),
    );
  }

  public function submit_form($pane_values, $checkout_pane, $order = NULL) {
    if (empty($order)) {
      $order = $this->order;
    }
    $form = parent::submit_form($pane_values, $checkout_pane, $order);

    // Merge in values from the order.
    if (!empty($order->data['commerce_correios'])) {
      $pane_values += $order->data['commerce_correios'];
    }

    // Remove empty values from services setting and get only actually enabled
    // services.
    $services = $this->correios_services(array_filter($this->settings['services']));

    // Merge in default values.
    $pane_values += array(
      // Default to first option.
      'service' => array_shift(array_keys($services)),
    );

    $form['service'] = array(
      '#type' => 'radios',
      '#title' => t('Service'),
      '#options' => $services,
      '#default_value' => $pane_values['service'],
    );

    return $form;
  }

  public function submit_form_validate($pane_form, $pane_values, $form_parents = array(), $order = NULL) {
    // @todo: validate postal code.
  }

  public function calculate_quote($currency_code, $form_values = array(), $order = NULL, $pane_form = NULL, $pane_values = NULL) {
    if (empty($order)) {
      $order = $this->order;
    }
    $settings = $this->settings;

    $wrapper = entity_metadata_wrapper('commerce_order', $order);

    // Strip non numeric characters from postal code.
    $postal_code = preg_replace( '/\D/', '', $wrapper->commerce_customer_shipping->commerce_customer_address->postal_code->value());

    $params = array(
      'nCdServico' => $form_values['service'],
      'sCepOrigem' => $settings['store_postal_code'],
      'sCepDestino' => $postal_code,
      'nVlPeso' => $settings['default_weight'],
      'nVlComprimento' => $settings['default_lenght'],
      'nVlAltura' => $settings['default_height'],
      'nVlLargura' => $settings['default_depth'],
    );

    $shipping_line_items = array();
    if ($quote = $this->correios_call($params)) {
      $shipping_line_items[] = array(
        'amount' => commerce_currency_decimal_to_amount(str_replace(',', '.', (string) $quote->Valor), $currency_code),
        'currency_code' => $currency_code,
        'label' => $this->correios_service_name($form_values['service']),
      );
    }
    else {
      drupal_set_message(t('There was an error calculating the shipping cost for your order. Please try again later.'), 'error');
      // @todo don't allow the user to go futher the checkout. Maybe move the
      // calculation part to the form validation handler.
    }

    return $shipping_line_items;
  }

  /**
   * Call Correios shipping calculation webservice.
   *
   * @param $params
   *   Array with params to pass to Correio Webservice.
   */
  public function correios_call($params) {
    // Add some required and hardcoded values to the params array.
    $params += array(
      'nCdEmpresa' => '',
      'sDsSenha' => '',
      'nCdFormato' => 1,
      'sCdMaoPropria' => 'n',
      'nVlValorDeclarado' => 0,
      'sCdAvisoRecebimento' => 'n',
      'nVlDiametro' => 0,
      'StrRetorno' => 'xml',
    );

    $url = url('http://ws.correios.com.br/calculador/CalcPrecoPrazo.aspx', array('query' => $params));

    if ($xml = simplexml_load_file($url)) {
      if((int) $xml->cServico->Erro == 0) {
        return $xml->cServico;
      }
      else {
        watchdog('commerce_correios', t('There was an error calculating the shipping cost. Error (%number): %message. URL: %url'), array('%number' => (int) $xml->cServico->Erro, '%number' => (string) $xml->cServico->MsgErro, '%url' => $url), WATCHDOG_ERROR);
      }
    }
    else {
      watchdog('commerce_correios', t('There was an unknown error calculating the shipping cost. URL: %url'), array('%url' => $url), WATCHDOG_ERROR);
    }

    return FALSE;
  }

  /**
   * Get name for Correios service.
   *
   * @param $id
   *   The Correios service numeric identifier.
   */
  public function correios_service_name($id) {
    $names = $this->correios_services();
    return $names[$id];
  }

  /**
   * Return a list of services supported by this module.
   *
   * @param $ids
   *   The Correios service numeric identifiers, to filter results.
   */
  public function correios_services(Array $ids = array()) {
    $services = array(
      '41106' => t('PAC'),
      '40010' => t('SEDEX'),
    );

    if (empty($ids)) {
      return $services;
    }
    else {
      return array_intersect_key($services, $ids);
    }
  }
}
