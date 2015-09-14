<?php

/**
 * @file
 * Admin page callback for bc_cupom module.
 */

/** ================================================================= //
 * Callback for delete a cupom.
 */
function bc_cupom_delete_cupom($cpid) {
  cupom_delete($cpid);
  drupal_goto('admin/content/cupom');
}

/** ================================================================= //
 * Callback form for configure cupom settings.
 */
function bc_cupom_config_form($form, &$form_state) {
  $form['nothing'] = array(
    '#type' => 'textfield',
    '#title' => t('Nothing'),
    '#description' => t('Enter nothing.'),
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/** ================================================================= //
 * Callback form for configure cupom settings.
 */
function bc_cupom_view_all($form, &$form_state) {
  $sort = isset($_POST['sortby'])? $_POST['sortby'] : 'cpid';
  $order = isset($_POST['order'])? $_POST['order'] : 'ASC';
  $cupoms = cupom_get_all($sort, $order);

  $header = array(
    t('Select'), t('ID'), t('Title'), t('Author'), t('Created'), t('Expiration'),
    t('Uses'), t('Quantity'), t('Discount'), t('Operations'),
  );

  // FILTERS
  $form['filters'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cupons'),
  );

  $form['filters']['sortby'] = array(
    '#type' => 'select',
    '#title' => t('Sort By'),
    '#options' => array(
      'created' => t('Created'),
      'title' => t('Title'),
      'expiration' => t('Expiration'),
      'cpid' => t('ID'),
      'uses' => t('Uses'),
      'quantity' => t('Quantity'),
      'discount_type' => t('Discount type'),
      'discount' => t('Discount'),
    ),
    '#default_value' => $sort,
  );

  $form['filters']['order'] = array(
    '#type' => 'select',
    '#title' => t('Sort By'),
    '#options' => array(
      'ASC' => t('ASC'),
      'DESC' => t('DESC'),
    ),
    '#default_value' => $order,
  );

  $form['filters']['apply'] = array(
    '#type' => 'button',
    '#value' => t('Apply'),
  );

  // CONTENT
  $form['content'] = array(
    '#prefix' => '<table><theader><th>' . implode('</th><th>', $header) . '</th></theader>',
    '#suffix' => '</table>',
    '#tree' => TRUE,
  );

  foreach ($cupoms as $cupom) {
    $cpid = $cupom->cpid;

    $form['content'][$cpid] = array(
      '#type' => 'markup',
      '#prefix' => '<tr>',
      '#suffix' => '</tr>',
    );

    $form['content'][$cpid]['select'] = array(
      '#type' => 'checkbox',
      '#title' => t('Select'),
      '#title_display' => 'invisible',
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $form['content'][$cpid]['cpid'] = array(
      '#type' => 'markup',
      '#markup' => $cupom->cpid,
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $form['content'][$cpid]['title'] = array(
      '#type' => 'markup',
      '#markup' => $cupom->title,
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $account = user_load($cupom->author);
    $form['content'][$cpid]['author'] = array(
      '#type' => 'markup',
      '#markup' => theme('username', array('account' => $account)),
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $form['content'][$cpid]['created'] = array(
      '#type' => 'markup',
      '#markup' => date('j F Y H:i', $cupom->created),
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $form['content'][$cpid]['expiration'] = array(
      '#type' => 'markup',
      '#markup' => date('j F Y H:i', $cupom->expiration),
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $form['content'][$cpid]['uses'] = array(
      '#type' => 'markup',
      '#markup' => $cupom->uses,
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $form['content'][$cpid]['quantity'] = array(
      '#type' => 'markup',
      '#markup' => $cupom->quantity,
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $type = '';
    if ($cupom->discount_type == 0) {
      $discount = number_format($cupom->discount, 1) . '%';
    }
    elseif ($cupom->discount_type == 1) {
      $discount = cart_format_money($cupom->discount) . ' R$';
    }
    $form['content'][$cpid]['discount'] = array(
      '#type' => 'markup',
      '#markup' => $discount,
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );

    $items = array(
      l(t('edit'), "admin/content/cupom/{$cpid}/edit"),
      l(t('delete'), "admin/content/cupom/{$cpid}/delete"),
    );
    $form['content'][$cpid]['links'] = array(
      '#type' => 'markup',
      '#markup' => theme('item_list', array(
        'items' => $items,
        'attributes' => array(
          'class' => array('links', 'inline')
        )
      )),
      '#prefix' => '<td>',
      '#suffix' => '</td>',
    );
  }
  $form['#rebuild'] = TRUE;

  return $form;
}

/** ================================================================= //
 * Callback form for configure cupom settings.
 */
function bc_cupom_add_cupom($form, &$form_state, $cpid = -1) {
  $value = new DateTime('+1d');

  if ($cpid > 0) { // EDIT
    $cupom = cupom_get($cpid);
    if (!$cupom) { // Exit if cupom wasn't found.
      drupal_goto('admin/content/cupom');
    }
    $title = $cupom['title'];
    $quantity = $cupom['quantity'];
    $expiration = date(BC_CUPOM_TIME_FORMAT, $cupom['expiration']);
    $discount_type = $cupom['discount_type'];
    $discount = $cupom['discount'];
  }
  else { // ADD
    $title = '';
    $quantity = NULL;
    $expiration = NULL;
    $discount_type = 0;
    $discount = NULL;
  }

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#description' => t('Give a name to the cupom you are creating.'),
    '#default_value' => $title,
    '#required' => TRUE,
  );

  if ($cpid <= 0) {
    $form['code'] = array(
      '#type' => 'textfield',
      '#title' => t('Code'),
      '#description' => t('Enter a code that clients will receive to get this cupom discount.'),
      '#required' => TRUE,
    );
  }

  $form['quantity'] = array(
    '#type' => 'textfield',
    '#title' => t('Quantity'),
    '#description' => t('Number of time this cupom can be used.'),
    '#default_value' => $quantity,
    '#required' => TRUE,
  );

  $form['expiration'] = array(
    '#type' => 'date_popup',
    '#title' => t('Expiration Date'),
    '#description' => t('Choose the date when this cupom will expire.'),
    '#date_format' => BC_CUPOM_TIME_FORMAT,
    '#attributes' => array('placeholder' => t('Start date')),
    '#datepicker_options' => array(
      'maxDate' => 9999,
      'minDate' => $value->format(BC_CUPOM_TIME_FORMAT),
    ),
    '#date_year_range' => '0:+0',
    '#required' => TRUE,
    '#default_value' => $expiration,
  );

  $form['discount_type'] = array(
    '#type' => 'select',
    '#title' => t('Discount Type'),
    '#description' => t('Type of discount that will be given by this cupom.'),
    '#options' => cupom_types(),
    '#required' => TRUE,
    '#default_value' => $discount_type,
  );

  $form['discount'] = array(
    '#type' => 'textfield',
    '#title' => t('Discount Value'),
    '#description' => t('Value that will be discounted of the user cart, base on the discount type.'),
    '#required' => TRUE,
    '#default_value' => $discount,
  );

  $form['cpid'] = array(
    '#type' => 'hidden',
    '#value' => $cpid,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => ($cpid > 0)? t('Save changes') : t('Add Cupom'),
  );
  return $form;
}

function bc_cupom_add_cupom_validate($form, &$form_state) {
  if (isset($form_state['values']['code'])) {
    $code = $form_state['values']['code'];
    if (preg_match('/\s/', $code)) { // Have spaces
      form_set_error('code', t('The code field cannot contain spaces.'));
    }
  }
}

function bc_cupom_add_cupom_submit($form, &$form_state) {
  $title          = $form_state['values']['title'];
  $expiration     = strtotime($form_state['values']['expiration']);
  $quantity       = $form_state['values']['quantity'];
  $discount_type  = $form_state['values']['discount_type'];
  $discount       = $form_state['values']['discount'];
  $cpid           = $form_state['values']['cpid'];

  if ($cpid > 0) { // EDIT
    cupom_update($cpid, $title, $expiration, $quantity, $discount_type, $discount);
  }
  else { // ADD
    $code = $form_state['values']['code'];
    cupom_create($title, $code, $expiration, $quantity, $discount_type, $discount);
  }

  $form_state['redirect'] = 'admin/content/cupom';
}
