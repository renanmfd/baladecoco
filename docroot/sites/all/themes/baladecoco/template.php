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
  // Theme footer menus
  $menu = array('menu-support' => t('Support'));
  $attr = array('class' => array('menu', 'nav', 'clearfix'));
  $head = array('level' => 'h2', 'class' => array('menu-title'));
  foreach ($menu as $key => $name) {
    $attr['id'] = $key;
    $head['text'] = $name;
    $links = menu_navigation_links($key);
    $vars['menus'][$key] = theme('links', array(
      'links' => $links,
      'attributes' => $attr,
      'heading' => $head,
    ));
  }

  // Bottom content
  $vars['copyright'] = '<span>&#169; </span>'.t('All rights reserved.');
}
