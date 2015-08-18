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
    'footer' => array(
      'template' => 'templates/page--footer',
      'variables' => array('vars' => NULL),
    ),
    'svg_html' => array(
      'template' => 'templates/field--svg-html',
      'variables' => array(
        'svg_fid' => NULL,
        'img_fid' => NULL,
      ),
    ),
  );
  return $themes;
}

/**
 * Implements THEME_preprocess_THEMEFUNC().
 */
function baladecoco_preprocess_svg_html(&$vars) {
  $vars['svg'] = '';
  $vars['img'] = '';
  if (is_numeric($vars['svg_fid'])) {
    $file = file_load($vars['svg_fid']);
    $vars['svg'] = file_get_contents($file->uri);
  }
  if (is_numeric($vars['img_fid'])) {
    $file = file_load($vars['img_fid']);
    $vars['img'] = file_create_url($file->uri);
  }
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

/**
 * Implements THEME_preprocess_views_view().
 */
function baladecoco_preprocess_views_view(&$vars) {
  $vars['result_count'] = count($vars['view']->result);
  $frame_fid = variable_get(BC_ADMIN_SLIDE_FRAME_SVG, FALSE);
  if ($frame_fid) {
	$fallback_fid = variable_get(BC_ADMIN_SLIDE_FRAME_FALLBACK, FALSE);
	$vars['frame'] = theme('svg_html', array('svg_fid' => $frame_fid, 'img_fid' => $fallback_fid));
	// Control left
	$left_fid = variable_get(BC_ADMIN_SLIDE_CONTROL_LEFT, FALSE);
	$left_fb_fid = variable_get(BC_ADMIN_SLIDE_CONTROL_LEFT_FALLBACK, FALSE);
	$vars['left'] = theme('svg_html', array('svg_fid' => $left_fid, 'img_fid' => $left_fb_fid));
	// Control right
	$right_fid = variable_get(BC_ADMIN_SLIDE_CONTROL_RIGHT, FALSE);
	$right_fb_fid = variable_get(BC_ADMIN_SLIDE_CONTROL_RIGHT_FALLBACK, FALSE);
	$vars['right'] = theme('svg_html', array('svg_fid' => $right_fid, 'img_fid' => $right_fb_fid));
  }
}
