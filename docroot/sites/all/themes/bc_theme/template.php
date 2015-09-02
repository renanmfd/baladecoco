<?php

/**
 * @file
 * template.php
 */
 
/**
 * Implements HOOK_preprocess_html().
 */
function bc_theme_preprocess_html(&$vars) {
  // Google Fonts font-faces css file.
  drupal_add_css(
    'https://fonts.googleapis.com/css?family=Roboto+Slab:400,300,700|Open+Sans:400,300,700,400italic',
    array(
      'type' => 'external',
      'group' => CSS_THEME,
    )
  );
}

/**
 * Implements HOOK_preprocess_page().
 */
function bc_theme_preprocess_page(&$vars) {
  // Render logo block for presentation region.
  $block = block_load('bc_blocks', 'bc_pres_logo');
  $vars['pres_logo'] = _block_get_renderable_array(_block_render_blocks(array($block)));

  // Build Mobile menu, copying some content from other regions.
  $page = $vars['page'];
  $elements = array(
    'system_main-menu' => array(
      'region' => 'navigation',
      'weight' => 1,
    ),
    'menu_menu-quick-links' => array(
      'region' => 'topbar',
      'weight' => 2,
    ),
    'bc_blocks_bc_logo' => array(
      'region' => 'topbar',
      'weight' => 0,
    ),
  );
  foreach ($elements as $element => $config) {
    $region = $config['region'];
    $mobile_menu[$element] = $page[$region][$element];
    $mobile_menu[$element]['#weight'] = $config['weight'];
  }
  $mobile_menu['#sorted'] = TRUE;
  $mobile_menu['#theme_wrappers'][] = 'region';
  $mobile_menu['#region'] = 'mobile_menu';
  $vars['page']['mobile_menu'] = $mobile_menu;
}

/**
 * Implements HOOK_preprocess_panels_pane().
 */
function bc_theme_preprocess_panels_pane(&$vars) {
  // Add correct heading and class to fontpage panels.
  if ($vars['is_front']) {
    $vars['title_heading'] = 'h3';
    $vars['title_attributes_array']['class'][] = 'section-title';
  }
}

/**
 * Implements HOOK_menu_tree().
 */
function bc_theme_menu_tree($vars) {
  // Override default THEME_menu_tree to add class with the menu title.
  $title = str_replace('menu_tree__', '', $vars['theme_hook_original']);
  return '<ul class="menu ' . drupal_html_class($title) . '">' . $vars['tree'] . '</ul>';
}

/**
 * Implement HOOK_menu_link__MENUID() for main-menu.
 */
function bc_theme_menu_link__main_menu($vars) {
  // Theme main-menu itens to add icons with span wrappers. The icons come
  // from the ID attribute entered in the admin menu interface.
  $element = $vars['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element ['#below']);
  }

  $link = '';
  if (!empty($element['#attributes']['id'])) {
    $link = '<span class="' . $element['#attributes']['id'] . '"></span>';
    unset($element['#attributes']['id']);
  }

  $element['#localized_options']['html'] = TRUE;
  $link .= '<span class="title">' . $element['#title'] . '</span>';
  $output = l($link, $element ['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implement HOOK_menu_link__MENUID() for user-menu.
 */
function bc_theme_menu_link__user_menu($vars) {
  return bc_theme_menu_link__main_menu($vars);
}

/**
 * Implement HOOK_theme().
 */
function bc_theme_theme($existing, $type, $theme, $path) {
  return array(
    'presentation_fallback' => array(
      'variables' => array('fallback' => NULL, 'alt' => ''),
      'template' => 'templates/block/bc--presentation--fallback'
    ),
  );
}

/**
 * Implement HOOK_views_post_render().
 */
function bc_theme_views_post_render(&$view, &$output, &$cache) {
  if ($view->name == 'presentation') {
    // Get one presentation image to be fallback if js in not active.
    $fb_image = $view->result[0]->field_field_presentation_image_2;
    $fb_file = image_load($fb_image[0]['raw']['uri']);
    $alt = t('Delícias que derretem na boca!');
    $fb_image = array(
      '#theme' => 'image',
      '#alt' => $alt,
      '#path' => $fb_file->source,
      '#width' => $fb_file->info['width'],
      '#height' => $fb_file->info['height'],
    );
    $output .= theme('presentation_fallback', array(
      'fallback' => $fb_image,
      'alt' => $alt,
    ));
  }
}
