<?php
/**
 * @file
 * bc_menu_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bc_menu_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
