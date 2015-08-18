<?php
/**
 * @file
 * bc_bala_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bc_bala_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bc_bala_feature_node_info() {
  $items = array(
    'bala' => array(
      'name' => t('Bala'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
