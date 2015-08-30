<?php

/**
 * @file
 * template.php
 */

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
