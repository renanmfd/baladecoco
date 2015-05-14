<?php

/**
 * @file
 * template.php
 */

/**
 * Implement THEME_preprocess_page().
 */
function baladecoco_preprocess_page(&$vars) {
  if (module_exists('lang_dropdown')) {
	$block = module_invoke('lang_dropdown', 'block_view', 'language');
    $vars['lang_dropdown'] = drupal_render($block['content']);
  }
  $vars['front_header'] = theme('front_header', array('vars' => $vars));
  $vars['footer'] = theme('footer', array('vars' => $vars));
  $vars['logo'] = theme('image', array('path' => $vars['logo']));
}

/**
 * Implement THEME_theme().
 */
function baladecoco_theme() {
  $themes = array(
    'front_header' => array(
      'template' => 'templates/page--front-header',
      'variables' => array('vars' => NULL),
    ),
    'footer' => array(
      'template' => 'templates/page--footer',
      'variables' => array('vars' => NULL),
    ),
  );
  return $themes;
}

/**
 * Implement THEME_preprocess_TEMPLATE().
 * page--front-header.tpl.php
 */
function baladecoco_preprocess_front_header(&$vars) {
  dpm($vars);
}

/**
 * Implement THEME_preprocess_TEMPLATE().
 * page--footer.tpl.php
 */
function baladecoco_preprocess_footer(&$vars) {
  $vars['copyright'] = t('All rights reserved.');
  dpm($vars);
}
