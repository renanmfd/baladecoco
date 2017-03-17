<?php

/**
 * @file
 * Correios shipping calculation plugin definition.
 */

$plugin = array(
  'title' => t('Correios'),
  'description' => t('Provide shipping quotes using Brazilian Correios.'),
  'handler' => array(
    'class' => 'CommerceCorreios',
    'parent' => 'quote_base'
  ),
  'display_title' => t('Correios'),
  'create_rule' => TRUE,
  'settings' => array(
    'store_postal_code' => '',
    'services' => array(),
    'default_weight' => 1,
    'default_lenght' => 20,
    'default_height' => 10,
    'default_depth' => 15,
  ),
  'price_component' => array(
    'title' => t('Correios'),
    'display_title' => t('Shipping cost'),
    'weight' => -40,
  ),
);
