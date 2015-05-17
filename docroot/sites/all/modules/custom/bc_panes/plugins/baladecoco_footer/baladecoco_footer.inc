<?php

/**
 * @file
 * define ctools content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Footer'),
  'description' => t('Bala de Coco site - Footer'),
  'category' => 'baladecoco',
  'edit form' => 'baladecoco_footer_form',
  'render callback' => 'baladecoco_footer_render',
);

/**
 * An edit form for the pane's settings.
 */
function baladecoco_footer_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['image'] = array(
    '#type' => 'media',
    '#tree' => TRUE,
    '#title' => t('Image'),
    '#description' => t('Allowed formats: png, jpg, jpeg, gif.'),
    '#media_options' => array(
      'global' => array(
        'file_extensions' => 'png jpg jpeg gif',
        'max_filesize' => '10 MB',
        'file_directory' => '',
        'types' => array('image'),
      ),
    ),
    '#default_value' => !empty($conf['image']) ? $conf['image'] : 0,
    '#required' => TRUE,
    '#pp_crop_styles' => array('local_chapters_centers'),
  );

  return $form;
}

/**
 * Submit handler for configuration.
 */
function baladecoco_footer_form_submit(&$form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * @see ctools_plugin_examples()
 */
function baladecoco_footer_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();

  $contextual_links = '';

  $image_markup = '';
  if (!empty($conf['image'])) {
    $image_object = file_load($conf['image']);
    $image_markup = theme('image_style', array('style_name' => 'thumbnail', 'path' => $image_object->uri));
  }

  $content = theme('baladecoco_footer_theme', array(
    'contextual_links' => $contextual_links,
    'title' => !empty($conf['override_title']) ? $conf['override_title_text'] : t('Footer'),
    'image' => $image_markup,
  ));

  $block->content = $content;

  return $block;
}
