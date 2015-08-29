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
  return '<ul class="menu ' . drupal_html_class($title) . '">' . $vars ['tree'] . '</ul>';
}

/**
 * 
 */
function bc_theme_menu_link__main_menu($vars) {
  // Theme main-menu itens to add icons with span wrappers. The icons come
  // from the ID attribute entered in the admin menu interface.
  $element = $vars ['element'];
  $sub_menu = '';

  if ($element ['#below']) {
    $sub_menu = drupal_render($element ['#below']);
  }

  $link = '';
  if (!empty($element ['#attributes']['id'])) {
    $link = '<span class="' . $element ['#attributes']['id'] . '"></span>';
    unset($element ['#attributes']['id']);
  }

  $element ['#localized_options']['html'] = TRUE;
  $link .= '<span class="title">' . $element ['#title'] . '</span>';
  $output = l($link, $element ['#href'], $element ['#localized_options']);
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
