<?php
/**
 * @file
 * bc_review_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bc_review_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_review_rating'
  $field_bases['field_review_rating'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_review_rating',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'starrating',
    'settings' => array(
      'max_value' => 5,
    ),
    'translatable' => 0,
    'type' => 'starrating_rating',
  );

  return $field_bases;
}
