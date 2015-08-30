<?php
/**
 * @file
 * bc_presentation_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bc_presentation_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'presentation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Presentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Presentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'images-holder';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Block: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image']['id'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_image']['alter']['text'] = '<img data-src="[field_presentation_image]" src="" class="presentation mobile"/>';
  $handler->display->display_options['fields']['field_presentation_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_presentation_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'presentation_mobile',
    'image_link' => '',
  );
  /* Field: Block: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image_1']['id'] = 'field_presentation_image_1';
  $handler->display->display_options['fields']['field_presentation_image_1']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_1']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_image_1']['alter']['text'] = '<img data-src="[field_presentation_image_1]" src="" class="presentation tablet"/>';
  $handler->display->display_options['fields']['field_presentation_image_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_presentation_image_1']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'presentation_tablet',
    'image_link' => '',
  );
  /* Field: Block: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image_2']['id'] = 'field_presentation_image_2';
  $handler->display->display_options['fields']['field_presentation_image_2']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_2']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_image_2']['alter']['text'] = '<img data-src="[field_presentation_image_2]" src="" class="presentation desktop"/>';
  $handler->display->display_options['fields']['field_presentation_image_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image_2']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_presentation_image_2']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'presentation_desktop',
    'image_link' => '',
  );
  /* Field: Block: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image_3']['id'] = 'field_presentation_image_3';
  $handler->display->display_options['fields']['field_presentation_image_3']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_3']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_image_3']['alter']['text'] = '<img data-src="[field_presentation_image_3]" src="" class="presentation mobile-landscape"/>';
  $handler->display->display_options['fields']['field_presentation_image_3']['element_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_3']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image_3']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_presentation_image_3']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'presentation_mobile_landscape',
    'image_link' => '',
  );
  /* Field: Block: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image_4']['id'] = 'field_presentation_image_4';
  $handler->display->display_options['fields']['field_presentation_image_4']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_4']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_4']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_image_4']['alter']['text'] = '<img data-src="[field_presentation_image_4]" src="" class="presentation desktop-wide"/>';
  $handler->display->display_options['fields']['field_presentation_image_4']['element_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_4']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image_4']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_presentation_image_4']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'presentation_desktop_wide',
    'image_link' => '',
  );
  /* Field: Block: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image_5']['id'] = 'field_presentation_image_5';
  $handler->display->display_options['fields']['field_presentation_image_5']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_5']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image_5']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_image_5']['alter']['text'] = '<img data-src="[field_presentation_image_5]" src="" class="presentation desktop-superwide"/>';
  $handler->display->display_options['fields']['field_presentation_image_5']['element_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_5']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_presentation_image_5']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image_5']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image_5']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_presentation_image_5']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'presentation_desktop_superwide',
    'image_link' => '',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'presentation' => 'presentation',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['presentation'] = $view;

  return $export;
}
