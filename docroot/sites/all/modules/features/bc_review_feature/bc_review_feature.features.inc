<?php
/**
 * @file
 * bc_review_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bc_review_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bc_review_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bc_review_feature_node_info() {
  $items = array(
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => t('Creates review for the company. Serve as trust base for another costumers. Only authorized users can make review, only once.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
