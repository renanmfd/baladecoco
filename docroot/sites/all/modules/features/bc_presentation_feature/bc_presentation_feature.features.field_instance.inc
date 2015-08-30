<?php
/**
 * @file
 * bc_presentation_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bc_presentation_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-presentation-field_presentation_image'
  $field_instances['bean-presentation-field_presentation_image'] = array(
    'bundle' => 'presentation',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_presentation_image',
    'label' => 'Presentation Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'epsacrop' => array(
        'styles' => array(
          'presentation_desktop' => 'presentation_desktop',
          'presentation_desktop_superwide' => 'presentation_desktop_superwide',
          'presentation_desktop_wide' => 'presentation_desktop_wide',
          'presentation_mobile' => 'presentation_mobile',
          'presentation_mobile_landscape' => 'presentation_mobile_landscape',
          'presentation_tablet' => 'presentation_tablet',
        ),
      ),
      'file_directory' => 'presentation',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '10 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Presentation Image');

  return $field_instances;
}
