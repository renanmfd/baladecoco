<?php
/**
 * @file
 * bc_user_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bc_user_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_password__panel_context_95bbe1e8-cf53-441a-aac9-b9dbf0d9ce72';
  $handler->task = 'user_password';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Password',
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '853a298b-8666-4131-8317-ae6182310266';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-662f8543-2f6d-4a27-aac9-afda09d32199';
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
    $pane->uuid = '662f8543-2f6d-4a27-aac9-afda09d32199';
    $display->content['new-662f8543-2f6d-4a27-aac9-afda09d32199'] = $pane;
    $display->panels['left'][0] = 'new-662f8543-2f6d-4a27-aac9-afda09d32199';
    $pane = new stdClass();
    $pane->pid = 'new-db69aa10-0b13-4934-9ef1-e9b66e232dcd';
    $pane->panel = 'right';
    $pane->type = 'user_password_form';
    $pane->subtype = 'user_password_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-TE01wr6-R33U8sFoH143O7t9C2sF2BVXrCMFfVCkodg',
      'form_token' => 'XPnaavOHagx1retw31q3hAhZtGZn4TDugkMl2AgP95Y',
      'form_id' => 'ctools_user_password_form_content_type_edit_form',
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
    $pane->uuid = 'db69aa10-0b13-4934-9ef1-e9b66e232dcd';
    $display->content['new-db69aa10-0b13-4934-9ef1-e9b66e232dcd'] = $pane;
    $display->panels['right'][0] = 'new-db69aa10-0b13-4934-9ef1-e9b66e232dcd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-662f8543-2f6d-4a27-aac9-afda09d32199';
  $handler->conf['display'] = $display;
  $export['user_password__panel_context_95bbe1e8-cf53-441a-aac9-b9dbf0d9ce72'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_register__panel_context_ae802007-0fc3-43dd-bad5-0f3f8be8813c';
  $handler->task = 'user_register';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Register',
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '011d4ff2-3334-44f8-9182-b5761321a3e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e97d9179-05e8-45e2-9c8e-f751a087c05b';
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
    $pane->uuid = 'e97d9179-05e8-45e2-9c8e-f751a087c05b';
    $display->content['new-e97d9179-05e8-45e2-9c8e-f751a087c05b'] = $pane;
    $display->panels['left'][0] = 'new-e97d9179-05e8-45e2-9c8e-f751a087c05b';
    $pane = new stdClass();
    $pane->pid = 'new-42b7fce7-9258-4c4e-8a6a-1a43b5bffc9c';
    $pane->panel = 'right';
    $pane->type = 'user_register_form';
    $pane->subtype = 'user_register_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-Cim55eH4xVOrLjPPT95yTchiqYiPzUNJEdAd3QD16Rk',
      'form_token' => 'Gwblh3jyTvsSxI1-KZSTNiIZfCg35442JgnV5W0q2eM',
      'form_id' => 'ctools_user_register_form_content_type_edit_form',
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
    $pane->uuid = '42b7fce7-9258-4c4e-8a6a-1a43b5bffc9c';
    $display->content['new-42b7fce7-9258-4c4e-8a6a-1a43b5bffc9c'] = $pane;
    $display->panels['right'][0] = 'new-42b7fce7-9258-4c4e-8a6a-1a43b5bffc9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_register__panel_context_ae802007-0fc3-43dd-bad5-0f3f8be8813c'] = $handler;

  return $export;
}
