<?php
/**
 * @file
 * bc_presentation_feature.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function bc_presentation_feature_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'presentation';
  $bean_type->label = 'Presentation';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['presentation'] = $bean_type;

  return $export;
}
