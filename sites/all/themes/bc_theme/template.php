<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function bc_theme_js_alter(&$js) {
  $js['sites/all/themes/bootstrap/js/bootstrap.js']['scope'] = 'header';
}

function bc_theme_preprocess_region(&$vars) {
  if ($vars['region'] != 'navigation') {
    $vars['classes_array'][] = 'container';
  }
}
