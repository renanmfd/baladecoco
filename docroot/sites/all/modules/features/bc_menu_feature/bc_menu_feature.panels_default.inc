<?php
/**
 * @file
 * bc_menu_feature.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bc_menu_feature_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mobile_menu';
  $mini->category = 'BC Panels';
  $mini->admin_title = 'Mobile Menu';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'mobile_menu';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'logo' => NULL,
      'main_menu' => NULL,
      'quick_menu' => NULL,
      'others' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '54e02420-405d-4439-9509-dc97f73c0fe5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2798a9d3-fd76-4825-b872-df58875ef2f3';
    $pane->panel = 'logo';
    $pane->type = 'block';
    $pane->subtype = 'bc_blocks-bc_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = '2798a9d3-fd76-4825-b872-df58875ef2f3';
    $display->content['new-2798a9d3-fd76-4825-b872-df58875ef2f3'] = $pane;
    $display->panels['logo'][0] = 'new-2798a9d3-fd76-4825-b872-df58875ef2f3';
    $pane = new stdClass();
    $pane->pid = 'new-992b2882-efde-4165-aa88-2f82f32a9127';
    $pane->panel = 'main_menu';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = '992b2882-efde-4165-aa88-2f82f32a9127';
    $display->content['new-992b2882-efde-4165-aa88-2f82f32a9127'] = $pane;
    $display->panels['main_menu'][0] = 'new-992b2882-efde-4165-aa88-2f82f32a9127';
    $pane = new stdClass();
    $pane->pid = 'new-d00304fe-2b2d-4dc2-922c-709ca35d5a29';
    $pane->panel = 'quick_menu';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-quick-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = 'd00304fe-2b2d-4dc2-922c-709ca35d5a29';
    $display->content['new-d00304fe-2b2d-4dc2-922c-709ca35d5a29'] = $pane;
    $display->panels['quick_menu'][0] = 'new-d00304fe-2b2d-4dc2-922c-709ca35d5a29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mobile_menu'] = $mini;

  return $export;
}
