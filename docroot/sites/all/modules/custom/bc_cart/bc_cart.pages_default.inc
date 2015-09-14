<?php
/**
 * @file
 * bc_user_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bc_cart_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cart';
  $page->task = 'page';
  $page->admin_title = 'Cart';
  $page->admin_description = 'Cart page where user can proceed to buy items, edit, delete and change item quantities.';
  $page->path = 'cart';
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
  $handler->name = 'page_cart__panel';
  $handler->task = 'page';
  $handler->subtask = 'cart';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Cart',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-checkout page-checkout-1',
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
      'default' => NULL,
      'home_top' => NULL,
      'home_middle' => NULL,
      'home_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f0ed157b-38d9-488d-bb30-b0f45cb52050';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1499edc4-30d6-48c0-b30e-8a4f304c57fb';
    $pane->panel = 'home_middle';
    $pane->type = 'block';
    $pane->subtype = 'bc_cart-bc_cart_cart';
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
    $pane->uuid = '1499edc4-30d6-48c0-b30e-8a4f304c57fb';
    $display->content['new-1499edc4-30d6-48c0-b30e-8a4f304c57fb'] = $pane;
    $display->panels['home_middle'][0] = 'new-1499edc4-30d6-48c0-b30e-8a4f304c57fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1499edc4-30d6-48c0-b30e-8a4f304c57fb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cart'] = $page;

  return $pages;
}
