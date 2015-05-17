<?php

/**
 * @file
 * BC Admin Forms.
 */

/**
 * Form menu callback. ============================================== //
 */
function _bc_admin_main_form($form, &$form_state) {
  $form['sometext'] = array(
    '#type' => 'textfield',
    '#title' => t('Sometext'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );
  return $form;
}

/**
 * Form menu callback. ============================================== //
 */
function _bc_admin_slider_form($form, &$form_state) {
  // Slider Frame
  $form['slider_frame'] = array(
    '#type' => 'managed_file',
    '#title' => t('Frame'),
    '#description' => t('A frame for the main page slideshow. Extensions SVG.'),
    '#default_value' => variable_get(BC_ADMIN_SLIDE_FRAME_SVG, ''),
    '#upload_location' => 'public://admin/',
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('svg'),
      'file_validate_size' => array(50*1024*1024),
    ),
  );
  
  $form['slider_frame_fallback'] = array(
    '#type' => 'managed_file',
    '#title' => t('Frame fallback'),
    '#description' => t('A frame fallback for the main page slideshow. Extensions: PNG.'),
    '#default_value' => variable_get(BC_ADMIN_SLIDE_FRAME_FALLBACK, ''),
    '#upload_location' => 'public://admin/',
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('png'),
      'file_validate_size' => array(50*1024*1024),
    ),
  );
  $form['line_separator_1'] = array('#markup' => '<hr>'); 

  // Slider Control Left
  $form['slider_control_left'] = array(
    '#type' => 'managed_file',
    '#title' => t('Control left'),
    '#description' => t('Control left for the main page slideshow. Extensions: SVG.'),
    '#default_value' => variable_get(BC_ADMIN_SLIDE_CONTROL_LEFT, ''),
    '#upload_location' => 'public://admin/',
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('svg'),
      'file_validate_size' => array(50*1024*1024),
    ),
  );
  
  $form['slider_control_left_fallback'] = array(
    '#type' => 'managed_file',
    '#title' => t('Control left fallback'),
    '#description' => t('Control left fallback for the main page slideshow. Extensions: PNG, JPG.'),
    '#default_value' => variable_get(BC_ADMIN_SLIDE_CONTROL_LEFT_FALLBACK, ''),
    '#upload_location' => 'public://admin/',
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('png', 'jpg'),
      'file_validate_size' => array(50*1024*1024),
    ),
  );
  $form['line_separator_2'] = array('#markup' => '<hr>'); 

  // Slider Control Right
  $form['slider_control_right'] = array(
    '#type' => 'managed_file',
    '#title' => t('Control right'),
    '#description' => t('Control right for the main page slideshow. Extensions: SVG.'),
    '#default_value' => variable_get(BC_ADMIN_SLIDE_CONTROL_RIGHT, ''),
    '#upload_location' => 'public://admin/',
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('svg'),
      'file_validate_size' => array(50*1024*1024),
    ),
  );
  
  $form['slider_control_right_fallback'] = array(
    '#type' => 'managed_file',
    '#title' => t('Control right Fallback'),
    '#description' => t('Control right fallback for the main page slideshow. Extensions: PNG, JPG.'),
    '#default_value' => variable_get(BC_ADMIN_SLIDE_CONTROL_RIGHT_FALLBACK, ''),
    '#upload_location' => 'public://admin/',
    '#required' => TRUE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('png', 'jpg'),
      'file_validate_size' => array(50*1024*1024),
    ),
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );
  return $form;
}

function _bc_admin_slider_form_submit($form, &$form_state) {
  global $user;
  $selectors = array(
    array('name' => 'slider_frame', 'variable' => BC_ADMIN_SLIDE_FRAME_SVG),
    array('name' => 'slider_frame_fallback', 'variable' => BC_ADMIN_SLIDE_FRAME_FALLBACK),
    array('name' => 'slider_control_left', 'variable' => BC_ADMIN_SLIDE_CONTROL_LEFT),
    array('name' => 'slider_control_left_fallback', 'variable' => BC_ADMIN_SLIDE_CONTROL_LEFT_FALLBACK),
    array('name' => 'slider_control_right', 'variable' => BC_ADMIN_SLIDE_CONTROL_RIGHT),
    array('name' => 'slider_control_right_fallback', 'variable' => BC_ADMIN_SLIDE_CONTROL_RIGHT_FALLBACK),
  );
  foreach ($selectors as $selector) {
    $fid = variable_get($selector['variable'], 0);
    if ($fid != $form_state['values'][$selector['name']]) {
      $file = file_load($form_state['values'][$selector['name']]);
      // Save the new file.
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      variable_set($selector['variable'], $file->fid);
      file_usage_add($file, 'bc_admin', 'user', $user->uid+$file->fid);
      // Delete the old one.
      if (is_numeric($fid) and $fid > 0) {
        $old = file_load($fid);
        file_delete($old);
      }
    }
  }
}
