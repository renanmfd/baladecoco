<?php
/**
 * @file
 * bc_theme_settings_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bc_theme_settings_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
