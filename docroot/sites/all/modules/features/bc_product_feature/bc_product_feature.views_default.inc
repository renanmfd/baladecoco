<?php
/**
 * @file
 * bc_product_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bc_product_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_frontpage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Balas de Coco';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'baladecoco baladecoco-teaser baladecoco-[title]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'product_main_epsa',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_product_image']['separator'] = '';
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_product_price']['id'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['table'] = 'field_data_field_product_price';
  $handler->display->display_options['fields']['field_product_price']['field'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['label'] = '';
  $handler->display->display_options['fields']['field_product_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_price']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Bala Type */
  $handler->display->display_options['fields']['field_bala_type']['id'] = 'field_bala_type';
  $handler->display->display_options['fields']['field_bala_type']['table'] = 'field_data_field_bala_type';
  $handler->display->display_options['fields']['field_bala_type']['field'] = 'field_bala_type';
  $handler->display->display_options['fields']['field_bala_type']['label'] = '';
  $handler->display->display_options['fields']['field_bala_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bala_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Bala Flavour */
  $handler->display->display_options['fields']['field_bala_flavour']['id'] = 'field_bala_flavour';
  $handler->display->display_options['fields']['field_bala_flavour']['table'] = 'field_data_field_bala_flavour';
  $handler->display->display_options['fields']['field_bala_flavour']['field'] = 'field_bala_flavour';
  $handler->display->display_options['fields']['field_bala_flavour']['label'] = '';
  $handler->display->display_options['fields']['field_bala_flavour']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bala_flavour']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Stuffed Flavour */
  $handler->display->display_options['fields']['field_stuffed_flavour']['id'] = 'field_stuffed_flavour';
  $handler->display->display_options['fields']['field_stuffed_flavour']['table'] = 'field_data_field_stuffed_flavour';
  $handler->display->display_options['fields']['field_stuffed_flavour']['field'] = 'field_stuffed_flavour';
  $handler->display->display_options['fields']['field_stuffed_flavour']['label'] = '';
  $handler->display->display_options['fields']['field_stuffed_flavour']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stuffed_flavour']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product Type (field_product_type) */
  $handler->display->display_options['filters']['field_product_type_tid']['id'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['table'] = 'field_data_field_product_type';
  $handler->display->display_options['filters']['field_product_type_tid']['field'] = 'field_product_type_tid';
  $handler->display->display_options['filters']['field_product_type_tid']['value'] = array(
    56 => '56',
  );
  $handler->display->display_options['filters']['field_product_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_type_tid']['vocabulary'] = 'product_type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'balas_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'baladecoco baladecoco-teaser baladecoco-[title]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['block_caching'] = '-1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'balas_page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['path'] = 'balas';
  $export['product_frontpage'] = $view;

  return $export;
}
