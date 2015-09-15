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
  drupal_add_html_head(array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#attributes' => array(
      'rel' => 'stylesheet',
      'type' => 'text/css',
      'href' => 'https://fonts.googleapis.com/css?family=Roboto+Slab:400,300,700|Open+Sans:400,300,700,400italic',
      'async' => 'true',
    ),
    '#weight' => 999,
  ), 'google-fonts');

  // Configuring screen Viewport and default zoom.
  drupal_add_html_head(array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1',
    ),
  ), 'screen-viewport');

  // Force IE to render with the higher engine.
  drupal_add_html_head(array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'X-UA-Compatible',
      'content' => 'IE=9; IE=8; IE=7; IE=EDGE',
    ),
    '#weight' => -9999,
  ), 'ie-compatibility');

  // Add favicons to the size.
  $vars['favicons'] = theme('favicons', array(
    'theme_path' => drupal_get_path('theme', 'bc_theme'),
  ));
}

/**
 * Implements HOOK_preprocess_page().
 */
function bc_theme_preprocess_page(&$vars) {
  // Render logo block for presentation region.
  $block = block_load('bc_blocks', 'bc_pres_logo');
  $vars['pres_logo'] = _block_get_renderable_array(_block_render_blocks(array($block)));

  // Is moderator.
  $vars['is_moderator'] = in_array('moderator', $vars['user']->roles);
}

/**
 * Implements HOOK_preprocess_node().
 */
function bc_theme_preprocess_node(&$vars) {
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
  $vars['classes_array'][] = drupal_html_class('node-' . $vars['type'] . '-' . $vars['view_mode']);

  // Node PRODUCT
  if ($vars['type'] == 'product') {
    // View Mode FULL
    if ($vars['view_mode'] == 'full') {
      _bc_theme_preprocess_node_product_full($vars);
    }

    // View Mode TEASER
    if ($vars['view_mode'] == 'teaser') {
      _bc_theme_preprocess_node_product_teaser($vars);
    }
  }

  // Node REVIEW
  elseif ($vars['type'] == 'review') {
    // View Mode TEASER
    if ($vars['view_mode'] == 'teaser') {
      _bc_theme_preprocess_node_review_teaser($vars);
    }

    // View Mode GROUP PAGE
    else if ($vars['view_mode'] == 'group_page') {
      _bc_theme_preprocess_node_review_group_page($vars);
    }
  }
}

/**
 * Preprocess variables for node Product on full view mode.
 * @see bc_theme_preprocess_node()
 */
function _bc_theme_preprocess_node_product_full(&$vars) {
  // Add flexslider js to Product node.
  drupal_add_js(drupal_get_path('theme', 'bc_theme') . '/js/vendor/jquery.flexslider-min.js', 'file');

  $vars['content']['field_product_image']['#theme'] = 'item_list';
}

/**
 * Preprocess variables for node Product on teaser view mode.
 * @see bc_theme_preprocess_node()
 */
function _bc_theme_preprocess_node_product_teaser(&$vars) {
  // Image - Get only first image from content (with style crop).
  $vars['image'] = $vars['content']['field_product_image'][0];
  // Price - Get raw value from field.
  $vars['price'] = array(
    '#markup' => $vars['field_product_price'][0]['value'],
  );
  // Taxonomy Fields - Build render array.
  $fields = array(
    'field_product_type' => 'product_type',
    'field_bala_type' => 'bala_type',
    'field_stuffed_flavour' => 'stuffed_flavour',
    'field_bala_flavour' => 'bala_flavour',
  );
  foreach ($fields as $field => $name) {
    $taxonomy = (isset($vars[$field][0]))? $vars[$field][0]: NULL;
    if ($taxonomy == NULL) continue;
    if (!isset($taxonomy['texonomy_term'])) {
      $taxonomy['texonomy_term'] = taxonomy_term_load($taxonomy['tid']);
    }
    $term = $taxonomy['texonomy_term'];
    $vars[$name] = array(
      '#markup' => $term->name,
      'tid' => $term->tid,
    );
  }
  // Links - array of links.
  $vars['links'] = is_array($vars['links'])? $vars['links'] : array();
  // Title - Add class to hide it.
  $vars['title_attributes_array']['class'][] = 'hidden';
}

/**
 * Preprocess variables for node Review on teaser view mode.
 * @see bc_theme_preprocess_node()
 */
function _bc_theme_preprocess_node_review_teaser(&$vars) {
  // Title - Add class to hide it.
  $vars['title_attributes_array']['class'][] = 'hidden';
  // User
  $vars['user'] = user_load($vars['uid']);
  $user_name = field_get_items('user', $vars['user'], 'field_user_name', NULL);
  $vars['author_name'] = $user_name[0]['safe_value'];
  // Data
  $vars['date'] = date('M/Y', $vars['created']);
  // Location
  $location = field_get_items('user', $vars['user'], 'field_user_location', 'teaser', NULL);
  if (!empty($location[0]['city'])) {
    $vars['location'] = check_plain($location[0]['city']);
    if (!empty($location[0]['province'])) {
      $vars['location'] .= ', ' . check_plain($location[0]['province']);
    }
  }
  else {
    $vars['location'] = FALSE;
  }
}

/**
 * Preprocess variables for node Review on group_page view mode.
 * @see bc_theme_preprocess_node()
 */
function _bc_theme_preprocess_node_review_group_page(&$vars) {
  $account = user_load($vars['uid']);
  // Get user name.
  if (isset($account->field_user_name[LANGUAGE_NONE][0]['value'])) {
    $name = check_plain($account->field_user_name[LANGUAGE_NONE][0]['value']);
  }
  else {
    $name = check_plain($account->name);
  }
  // Format name as a link to profile with tooltip.
  $first_name = explode(' ', $name)[0];
  $options = array(
    'attributes' => array(
      'class' => array('username'),
      'data-toggle' => 'tooltip',
      'data-placement' => 'bottom',
      'title' => t('Visit !name\'s profile.', array('!name' => $first_name)),
    )
  );
  $vars['user_name'] = l($name, url('user/'.$account->uid), $options);
  // Add read more link if the body content is too big.
  if (strlen($vars['body'][0]['safe_value']) > 250) {
    $opt = array('attributes' => array(
      'data-toggle' => 'tooltip',
      'title' => t('Click to see the full text.'),
    ));
    $vars['content']['body']['#suffix'] = '<span class="read-more">' . l(t('Read more'), url('node/' . $vars['nid']), $opt) . '</span>';
  }
  // Format created date.
  $vars['date'] = date('M/Y', $vars['created']);
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

  // Add theme wrapper for Mobile Menu section menus.
  if ($vars['pane']->panel == 'main_menu' or $vars['pane']->panel == 'quick_menu') {
    $vars['content']['#prefix'] = '<nav class="menu-wrapper">';
    $vars['content']['#suffix'] = '</nav>';
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

  // Put icon on menu links that have id attribute set.
  $link = '';
  if (!empty($element['#attributes']['id'])) {
    $link = '<span class="' . $element['#attributes']['id'] . '"></span>';
    unset($element['#attributes']['id']);
  }

  $element['#localized_options']['html'] = TRUE;
  $link .= '<span class="title">' . $element['#title'] . '</span>';

  // Add tooltip for menu items that have name attribute set on link.
  if (isset($element['#localized_options']['attributes']['name'])) {
    $element['#localized_options']['attributes']['title'] = $element['#localized_options']['attributes']['name'];
    $element['#localized_options']['attributes']['data-toggle'] = 'tooltip';
    $element['#localized_options']['attributes']['data-placement'] = 'bottom';
  }
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
    'favicons' => array(
      'variables' => array('theme_path' => ''),
      'template' => 'templates/block/bc--favicons'
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

/**
 * Implements HOOK_preprocess_HOOK() for hybridauth.
 */
function bc_theme_preprocess_hybridauth_provider_icon(&$vars) {
  $providers = array(
    'Facebook' => 'icon-facebook3',
    'Google' => 'icon-google',
  );
  $vars['icon'] = isset($providers[$vars['provider_id']])? $providers[$vars['provider_id']] : '';

  $paths = array('user/login', 'user/register', 'user/password');
  if (in_array($_GET['q'], $paths)) {
    $vars['icon_pack_classes'] .= ' big-icon';
  }
  else {
    $vars['icon_pack_classes'] .= ' default';
  }
}

/**
 * Override theme_form_element_label() to support #attributes on label form elements.
 */
function bc_theme_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  // If there are attributes already, use them. If not, create empty array.
  $attributes = isset($element['#label_attributes'])?$element['#label_attributes'] : array();
  $attributes['title'] = isset($element['#description'])? strip_tags($element['#description']) : strip_tags($element['#title']);

  // Add required to tooltip.
  if (isset($element['#required']) and $element['#required']) $attributes['title'] .= ' ' . t('(required)');
  $attributes['data-toggle'] = 'tooltip';
  $attributes['data-placement'] = 'auto left';

  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

/**
 * Implements HOOK_form_alter().
 */
function bc_theme_form_alter(&$form, &$form_state, $form_id) {
  // Reviews page exposed form - add tooltip to labels.
  if (isset($form_state['view']) and $form_state['view']->current_display == 'review_page') {
    $form['sort_by']['#description'] = t('Choose one way to sort the results.');
    _bc_user_form_label_tooltip($form['sort_by'], 'bottom');
    $form['sort_order']['#description'] = t('Ascendent or descent sorting.');
    _bc_user_form_label_tooltip($form['sort_order'], 'bottom');
  }
}
