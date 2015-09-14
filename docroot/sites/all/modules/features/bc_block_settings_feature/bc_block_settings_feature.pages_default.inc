<?php
/**
 * @file
 * bc_block_settings_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bc_block_settings_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_login__panel_context_593ed2b9-c53f-4308-b54c-3a5a7f2fed23';
  $handler->task = 'user_login';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'BC Login',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'user_login';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'home_top' => NULL,
      'home_middle' => NULL,
      'home_bottom' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Login';
  $display->uuid = '0d6af9e1-7302-4b66-8cef-b598e44cf202';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d5b897a-d9fd-43f8-a12d-106b8b4609b5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'hybridauth-hybridauth';
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
    $pane->uuid = '8d5b897a-d9fd-43f8-a12d-106b8b4609b5';
    $display->content['new-8d5b897a-d9fd-43f8-a12d-106b8b4609b5'] = $pane;
    $display->panels['left'][0] = 'new-8d5b897a-d9fd-43f8-a12d-106b8b4609b5';
    $pane = new stdClass();
    $pane->pid = 'new-a38df8af-c9a2-4654-939f-354bdca66bbc';
    $pane->panel = 'right';
    $pane->type = 'user_login_form';
    $pane->subtype = 'user_login_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-Bl9MwjwBgPaaCVOHckwMu5shPNFx9uqYsilRTzgfi2c',
      'form_token' => 'sQg0SdG32wNN-ZB2dwIDY_jubMb-EPxVAB_wFtpnfpw',
      'form_id' => 'ctools_user_login_form_content_type_edit_form',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a38df8af-c9a2-4654-939f-354bdca66bbc';
    $display->content['new-a38df8af-c9a2-4654-939f-354bdca66bbc'] = $pane;
    $display->panels['right'][0] = 'new-a38df8af-c9a2-4654-939f-354bdca66bbc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_login__panel_context_593ed2b9-c53f-4308-b54c-3a5a7f2fed23'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function bc_block_settings_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'home_top' => NULL,
      'home_middle' => NULL,
      'home_bottom' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $display->title = '';
  $display->uuid = '03b2e71f-effb-4681-9ba9-c42d0ea10688';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e6f58d0d-0e9a-4724-aff3-9a32092bb747';
    $pane->panel = 'home_middle';
    $pane->type = 'block';
    $pane->subtype = 'node-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'e6f58d0d-0e9a-4724-aff3-9a32092bb747';
    $display->content['new-e6f58d0d-0e9a-4724-aff3-9a32092bb747'] = $pane;
    $display->panels['home_middle'][0] = 'new-e6f58d0d-0e9a-4724-aff3-9a32092bb747';
    $pane = new stdClass();
    $pane->pid = 'new-4906ff29-759a-4f9c-afaa-8b3132751de7';
    $pane->panel = 'home_top';
    $pane->type = 'block';
    $pane->subtype = 'views-review_frontpage-review_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '4906ff29-759a-4f9c-afaa-8b3132751de7';
    $display->content['new-4906ff29-759a-4f9c-afaa-8b3132751de7'] = $pane;
    $display->panels['home_top'][0] = 'new-4906ff29-759a-4f9c-afaa-8b3132751de7';
    $pane = new stdClass();
    $pane->pid = 'new-0541e884-51dd-4e52-8737-8ba8f4d50a41';
    $pane->panel = 'home_top';
    $pane->type = 'block';
    $pane->subtype = 'views-product_frontpage-balas_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '0541e884-51dd-4e52-8737-8ba8f4d50a41';
    $display->content['new-0541e884-51dd-4e52-8737-8ba8f4d50a41'] = $pane;
    $display->panels['home_top'][1] = 'new-0541e884-51dd-4e52-8737-8ba8f4d50a41';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
