<?php
/**
 * @file
 * bc_user_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function bc_user_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
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
  $display->title = '';
  $display->uuid = '51e7974f-e1a7-4e15-b421-e4db2fa5ab46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d1f5a2e5-3994-4e4f-8bdf-afd87da8ac12';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = 'd1f5a2e5-3994-4e4f-8bdf-afd87da8ac12';
    $display->content['new-d1f5a2e5-3994-4e4f-8bdf-afd87da8ac12'] = $pane;
    $display->panels['center'][0] = 'new-d1f5a2e5-3994-4e4f-8bdf-afd87da8ac12';
    $pane = new stdClass();
    $pane->pid = 'new-6576d2b2-ae72-4b0f-a284-6742fbe81043';
    $pane->panel = 'center';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:hybridauth_identities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6576d2b2-ae72-4b0f-a284-6742fbe81043';
    $display->content['new-6576d2b2-ae72-4b0f-a284-6742fbe81043'] = $pane;
    $display->panels['center'][1] = 'new-6576d2b2-ae72-4b0f-a284-6742fbe81043';
    $pane = new stdClass();
    $pane->pid = 'new-32c323e2-e8ab-4745-bc77-bb0da54bb27d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'location_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '32c323e2-e8ab-4745-bc77-bb0da54bb27d';
    $display->content['new-32c323e2-e8ab-4745-bc77-bb0da54bb27d'] = $pane;
    $display->panels['center'][2] = 'new-32c323e2-e8ab-4745-bc77-bb0da54bb27d';
    $pane = new stdClass();
    $pane->pid = 'new-5c434e92-7ae5-4118-b117-43bcb336ca02';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5c434e92-7ae5-4118-b117-43bcb336ca02';
    $display->content['new-5c434e92-7ae5-4118-b117-43bcb336ca02'] = $pane;
    $display->panels['center'][3] = 'new-5c434e92-7ae5-4118-b117-43bcb336ca02';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default'] = $panelizer;

  return $export;
}
