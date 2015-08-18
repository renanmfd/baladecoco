<?php

/**
 * @file
 * define ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Hero Slider'),
  'description' => t('Bala de Coco - Hero Slider'),
  'category' => 'Bala de Coco',
  'edit form' => 'baladecoco_hero_slider_form',
  'render callback' => 'baladecoco_hero_slider_render',
);

/**
 * An edit form for the pane's settings.
 */
function baladecoco_hero_slider_form($form, &$form_state) {
  $conf = $form_state['conf'];
  
  for ($i = 1; $i <= 3; $i++) {
    $form["image_{$i}"] = array(
      '#type' => 'media',
      '#tree' => TRUE,
      '#title' => t("Hero Image {$i}"),
      '#description' => t('Allowed formats: png, jpg, jpeg, gif.'),
      '#media_options' => array(
        'global' => array(
          'file_extensions' => 'png jpg jpeg gif',
          'max_filesize' => '10 MB',
          'file_directory' => '',
          'types' => array('image'),
        ),
      ),
      '#default_value' => !empty($conf["image_{$i}"]) ? $conf["image_{$i}"] : 0,
    );
  }
  $form["image_1"]['#required'] = TRUE;

  return $form;
}

/**
 * Submit handler for configuration.
 */
function baladecoco_hero_slider_form_submit(&$form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * @see ctools_plugin_examples()
 */
function baladecoco_hero_slider_render($subtype, $conf, $args, $contexts) {
  drupal_add_js(drupal_get_path('module', 'bc_panes') . '/plugins/baladecoco_hero_slider/baladecoco_hero_slider.js');

  $block = new stdClass();
  $contextual_links = '';

  $images = array();
  for ($i = 1; $i <= 3; $i++) {
    $fid = $conf["image_{$i}"]['fid'];
    if (is_numeric($fid) and $fid > 0) {
      $file = file_load($fid);
      $images[] = file_create_url($file->uri);
    }
  }

  $content = theme('baladecoco_hero_slider', array(
    'contextual_links' => $contextual_links,
    'title' => !empty($conf['override_title']) ? $conf['override_title_text'] : t('Hero Slider'),
    'images' => $images,
  ));
  $block->content = $content;
  dpm(array($block,$conf,$images,$args,$context,$subtype));
  return $block;
}
