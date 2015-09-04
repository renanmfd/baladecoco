<?php
/**
 * @file
 * bc_review_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bc_review_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-review-body'
  $field_instances['node-review-body'] = array(
    'bundle' => 'review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'group_page' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 150,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-review-field_review_rating'
  $field_instances['node-review-field_review_rating'] = array(
    'bundle' => 'review',
    'default_value' => array(
      0 => array(
        'value' => 'null',
      ),
    ),
    'deleted' => 0,
    'description' => '[current-user:name], how many stars do you think we deserve?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 1,
          'icon_type' => 'star',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 1,
          'icon_type' => 'star',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 1,
      ),
      'group_page' => array(
        'label' => 'above',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 1,
          'icon_type' => 'star',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'starrating',
        'settings' => array(
          'fill_blank' => 1,
          'icon_color' => 1,
          'icon_type' => 'star',
        ),
        'type' => 'starrating_rating_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_review_rating',
    'label' => 'Rating',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'starrating',
      'settings' => array(),
      'type' => 'starrating_rating_widget',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Rating');
  t('[current-user:name], how many stars do you think we deserve?');

  return $field_instances;
}
