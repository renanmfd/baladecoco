<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Implements template_js_alter().
 */
function bc_theme_js_alter(&$js) {
  //$js['sites/all/themes/bootstrap/js/bootstrap.js']['scope'] = 'header';
}

/**
 * Implements template_preprocess_region().
 */
function bc_theme_preprocess_region(&$vars) {
  $vars['container'] = 'container';
  if ($vars['region'] == 'navigation' 
      or $vars['region'] == 'banner'
      or $vars['region'] == 'cart_summary') {
    $vars['container'] = 'container-fluid';
  }
}

/**
 * Implements template_preprocess_node().
 */
function bc_theme_preprocess_node(&$vars) {
  if ($vars['type'] == 'product_display') {
    bc_theme_preprocess_product_display_node($vars);
  } elseif ($vars['type'] == 'banner') {
    bc_theme_preprocess_banner_node($vars);
  } else {
    drupal_set_message($vars['type']);
  }
}

/**
 * Preprocess for Product Display content type.
 */
function bc_theme_preprocess_product_display_node(&$vars) {
  
}

/**
 * Preprocess for Banner content type.
 */
function bc_theme_preprocess_banner_node(&$vars) {
  // Display Mode - Banner
  if ($vars['view_mode'] == 'banner') {
    $vars['theme_hook_suggestions'][] = 'node__banner__banner';
    $vars['summary_position'] = $vars['field_summary_position'][0]['value'];

    // Make the banner a link, the url depending on the field_link.
    $link = $vars['field_link'][0]['value'];
    if ($link == 'external') {
      $url = $vars['field_banner_url'][0]['safe_value'];
      if (false === strpos($url, '://')) {
        $url = 'http://' . $url;
      }
      $vars['banner_link'] = $url;
    } elseif ($link == 'internal') {
      $entity = $vars['field_relation'][0]['entity'];
      $vars['banner_link'] = drupal_get_path_alias("/node/$entity->nid");
    } else {
      $vars['banner_link'] = $vars['node_url'];
    }
  }
}

/**
 * Implements template_preprocess_page().
 */
function bc_theme_preprocess_page(&$vars) {
  $key = array_search('container', $vars['navbar_classes_array']);
  if ($key !== FALSE) {
    unset($vars['navbar_classes'][$key]);
  }
  
  $vars['menu_icon'] = bc_get_icon('menu', 25);
  $vars['svg_logo'] = bc_get_icon('bc_name2', 70);
  $vars['cart_icon'] = bc_get_icon('cart', 35);
  
  $items = bc_master_get_cart_count();
  $vars['cart_count'] = $items == 0 ? '' : $items; 
  //format_plural($items, '1 item', '@count items');
}

/**
 * Implements hook_theme().
 */
function bc_theme_theme($existing, $type, $theme, $path) {
  return array(
    'bc_icon' => array(
      'variables' => array('name' => '', 'svg' => NULL, 'png' => '', 'size' => ''),
      'template' => 'templates/custom/bc-icon',
    ),
  );
}

/**
 * Custom function to get SVG icons with fallback, assisted by a template.
 */
function bc_get_icon($name, $size = 32) {
  $basePath = drupal_get_path('theme', 'bc_theme');
  $svg = '';
  $png = "$basePath/images/icon/png/default.png";
  
  $svgFile = file_get_contents("$basePath/images/icons/svg/$name.svg");
  if ($svgFile != FALSE) {
    $svg = preg_replace(
      array('/width="\d*"/', '/height="\d*"/'),
      array("width=\"$size\"", "height=\"$size\""),
      $svgFile
    );
    
    $pngPath = "$basePath/images/icons/png/$name.png";
    if (file_exists($pngPath)) {
      $png = $pngPath;
    }
  }
  return theme('bc_icon',  array(
    'name' => $name,
    'svg' => $svg,
    'png' => $png,
    'size' => $size,
  ));
}

/**
 * Implementation of theme_menu_link__MENU_NAME().
 */
function bc_theme_menu_link__user_menu($vars) {
  $element = $vars['element'];
  $sub_menu = '';
  $element ['#localized_options']['html'] = TRUE;

  if ($element ['#below']) {
    $sub_menu = drupal_render($element ['#below']);
  }
  
  $icon = '';
  if (!empty($element['#attributes']['id'])) {
    $icon = bc_get_icon($element['#attributes']['id'], 15);
  }
  
  $output = l($icon . $element ['#title'], $element ['#href'], $element ['#localized_options']);
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

