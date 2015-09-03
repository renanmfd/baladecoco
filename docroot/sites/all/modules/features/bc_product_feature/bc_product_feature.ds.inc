<?php
/**
 * @file
 * bc_product_feature.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function bc_product_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'group_page';
  $ds_view_mode->label = 'Group Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['group_page'] = $ds_view_mode;

  return $export;
}
