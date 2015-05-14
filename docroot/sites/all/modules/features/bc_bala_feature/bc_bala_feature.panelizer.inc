<?php
/**
 * @file
 * bc_bala_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function bc_bala_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:bala:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'bala';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10da6515-0b22-489d-be67-28300139ec84';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1e845d92-c777-4e6e-a414-75874f54dd3f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1e845d92-c777-4e6e-a414-75874f54dd3f';
    $display->content['new-1e845d92-c777-4e6e-a414-75874f54dd3f'] = $pane;
    $display->panels['center'][0] = 'new-1e845d92-c777-4e6e-a414-75874f54dd3f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:bala:default'] = $panelizer;

  return $export;
}
