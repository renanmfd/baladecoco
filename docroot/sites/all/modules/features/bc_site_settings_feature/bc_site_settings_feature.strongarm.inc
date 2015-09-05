<?php
/**
 * @file
 * bc_site_settings_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bc_site_settings_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_identifier';
  $strongarm->value = 'BIRV-72422';
  $export['acquia_identifier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_key';
  $strongarm->value = '710136aac332ebf18a340f4e062a1f4d';
  $export['acquia_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_boot_last';
  $strongarm->value = 1441421456;
  $export['acquia_spi_boot_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_cron_last';
  $strongarm->value = 1441390333;
  $export['acquia_spi_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_def_vars';
  $strongarm->value = array(
    'maintenance_mode' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_admin_priv' => array(
      'optional' => '0',
      'description' => '',
    ),
    'error_level' => array(
      'optional' => '0',
      'description' => '',
    ),
    'block_cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_send_node_user' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_email_verification' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_cancel_method' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_signatures' => array(
      'optional' => '0',
      'description' => '',
    ),
    'filter_fallback_format' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_admin_role' => array(
      'optional' => '0',
      'description' => '',
    ),
    'dblog_row_limit' => array(
      'optional' => '0',
      'description' => '',
    ),
    'file_default_scheme' => array(
      'optional' => '0',
      'description' => '',
    ),
    'install_profile' => array(
      'optional' => '0',
      'description' => '',
    ),
    'update_last_check' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_default_country' => array(
      'optional' => '0',
      'description' => '',
    ),
    'date_default_timezone' => array(
      'optional' => '0',
      'description' => '',
    ),
    'user_register' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_name' => array(
      'optional' => '0',
      'description' => '',
    ),
    'site_offline' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_send_watchdog' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_use_cron' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_backends' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_default_class' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_inc' => array(
      'optional' => '0',
      'description' => '',
    ),
    'googleanalytics_cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'preprocess_js' => array(
      'optional' => '0',
      'description' => '',
    ),
    'page_cache_maximum_age' => array(
      'optional' => '0',
      'description' => '',
    ),
    'preprocess_css' => array(
      'optional' => '0',
      'description' => '',
    ),
    'page_compression' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cache_lifetime' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cron_last' => array(
      'optional' => '0',
      'description' => '',
    ),
    'clean_url' => array(
      'optional' => '0',
      'description' => '',
    ),
    'redirect_global_clean' => array(
      'optional' => '0',
      'description' => '',
    ),
    'theme_zen_settings' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_module_diff_data' => array(
      'optional' => '0',
      'description' => '',
    ),
    'cron_safe_threshold' => array(
      'optional' => '0',
      'description' => '',
    ),
    'acquia_spi_def_timestamp' => array(
      'optional' => '0',
      'description' => '',
    ),
    'image_allow_insecure_derivatives' => array(
      'optional' => '0',
      'description' => '',
    ),
  );
  $export['acquia_spi_def_vars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_module_rebuild';
  $strongarm->value = 1441390333;
  $export['acquia_spi_module_rebuild'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_subscription_data';
  $strongarm->value = array(
    'timestamp' => 1441390342,
    'active' => '1',
    'href' => 'https://insight.acquia.com/node/uuid/dd88cf6c-cb7c-4357-807d-35f510468c76/dashboard',
    'uuid' => 'dd88cf6c-cb7c-4357-807d-35f510468c76',
    'subscription_name' => 'baladecoco',
    'expiration_date' => array(
      'value' => '2016-04-17T00:00:00',
    ),
    'product' => array(
      'view' => 'Acquia Network',
    ),
    'derived_key_salt' => 'd19d01a58d3a7f0c3601ad69c30ba00f',
    'update_service' => '1',
    'search_service_enabled' => 1,
    'update' => array(),
    'heartbeat_data' => array(
      'acquia_lift' => array(
        'status' => FALSE,
        'decision' => array(
          'public_key' => '',
          'private_key' => '',
        ),
        'profile' => array(
          'account_name' => '',
          'hostname' => '',
          'public_key' => '',
          'secret_key' => '',
          'js_path' => '',
        ),
      ),
      'search_service_enabled' => 1,
    ),
  );
  $export['acquia_subscription_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_welcome';
  $strongarm->value = '1';
  $export['acquia_welcome'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_review';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 1;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.users' => TRUE,
    'admin_menu.account' => TRUE,
    'admin_menu.search' => FALSE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_display';
  $strongarm->value = 'plid';
  $export['admin_menu_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_show_all';
  $strongarm->value = 0;
  $export['admin_menu_show_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 1;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced__active_tab';
  $strongarm->value = 'edit-plugins';
  $export['advanced__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous';
  $strongarm->value = 'Visitor';
  $export['anonymous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'array_filter';
  $strongarm->value = TRUE;
  $export['array_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_disable_search';
  $strongarm->value = 0;
  $export['chosen_disable_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_disable_search_threshold';
  $strongarm->value = '15';
  $export['chosen_disable_search_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_jquery_selector';
  $strongarm->value = 'select';
  $export['chosen_jquery_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_multiple';
  $strongarm->value = '0';
  $export['chosen_minimum_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_single';
  $strongarm->value = '0';
  $export['chosen_minimum_single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_minimum_width';
  $strongarm->value = '200';
  $export['chosen_minimum_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_no_results_text';
  $strongarm->value = 'Nenhum resultado';
  $export['chosen_no_results_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_placeholder_text_multiple';
  $strongarm->value = 'Escolha algumas opções';
  $export['chosen_placeholder_text_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_placeholder_text_single';
  $strongarm->value = 'Escolha uma opção';
  $export['chosen_placeholder_text_single'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_search_contains';
  $strongarm->value = 0;
  $export['chosen_search_contains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_use_theme';
  $strongarm->value = 1;
  $export['chosen_use_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'nu6k37';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1441390364;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Sao_Paulo';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '10';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_pages';
  $strongarm->value = array(
    'home' => TRUE,
  );
  $export['default_page_manager_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_api_url';
  $strongarm->value = 'api.drupal.org';
  $export['devel_api_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_error_handlers';
  $strongarm->value = array(
    1 => '1',
  );
  $export['devel_error_handlers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_execution';
  $strongarm->value = '5';
  $export['devel_execution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_krumo_skin';
  $strongarm->value = 'blue';
  $export['devel_krumo_skin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_memory';
  $strongarm->value = 0;
  $export['devel_memory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_page_alter';
  $strongarm->value = 0;
  $export['devel_page_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_query_display';
  $strongarm->value = 0;
  $export['devel_query_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_query_sort';
  $strongarm->value = '0';
  $export['devel_query_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_raw_names';
  $strongarm->value = 0;
  $export['devel_raw_names'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_rebuild_theme_registry';
  $strongarm->value = 1;
  $export['devel_rebuild_theme_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_redirect_page';
  $strongarm->value = 0;
  $export['devel_redirect_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_use_uncompressed_jquery';
  $strongarm->value = 0;
  $export['devel_use_uncompressed_jquery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_directory';
  $strongarm->value = '';
  $export['devel_xhprof_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_enabled';
  $strongarm->value = FALSE;
  $export['devel_xhprof_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'devel_xhprof_url';
  $strongarm->value = '';
  $export['devel_xhprof_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dev_timer';
  $strongarm->value = 0;
  $export['dev_timer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'UsSKfWRDr6P5pC6Yb9EjExJyZ7-dp_ZlppmsMMmfd7M';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'email__active_tab';
  $strongarm->value = 'edit-email-admin-created';
  $export['email__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entitycache_enabled';
  $strongarm->value = TRUE;
  $export['entitycache_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'bean' => array(
      0 => 'bean',
      1 => 'bid',
    ),
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_cache_tables_created';
  $strongarm->value = '';
  $export['entity_cache_tables_created'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'bean' => array(),
    'file' => array(),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'bc_theme_settings_feature' => array(
      'variable' => '247d7572a45f6f29620d60b182071719',
    ),
    'bc_site_settings_feature' => array(
      'variable' => 'eaf1464955e2bd37b2ea0fac4aeba8ac',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'bc_block_settings_feature' => array(
      'fe_block_settings' => '842471d54a8a39cce04bebe113b450b1',
      'dependencies' => '2f576de26d724a9bd2fe1d55316ad7bd',
      'context' => '9e5527ce2c050cdc5ed1c3b4582f9698',
      'page_manager_handlers' => 'cd9ea83306db8a3ed3e34de77d2b60a0',
      'page_manager_pages' => 'd1937d09ab24f074558404a65fdd3db3',
    ),
    'bc_menu_feature' => array(
      'menu_custom' => '705cdd1f18857db77fed06e3b2a121cc',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
      'menu_links' => '025dec2c9d583edfdb541c62d9f086cd',
    ),
    'bc_presentation_feature' => array(
      'fe_block_settings' => '30e3a0f912f2b1feafb1a682db73f981',
      'field_base' => '9160edb2f2e4e029a1a57862f42b7b98',
      'field_instance' => '76a55fd6a9c4ee4aa847f3cc42da34cb',
      'variable' => 'd235f9ee82c1eaac45814ea77c32ed8e',
      'dependencies' => '52f564115249375d9c37ff1f798d8fa2',
      'bean_type' => '0c145e4d8dfd5e08b4c368904eb96001',
      'image' => 'e51c6c9647d02c0b62803d2f853ba26b',
      'views_view' => '15e983a177a17839eab4988be2c3bb95',
    ),
    'bc_product_feature' => array(
      'fe_block_settings' => '22c83c95f2940a94f0298de30c4d3b4c',
      'node' => '911ce45184640ea5cb013ba5cab14898',
      'variable' => '4e4589b0d659620cc262164ef8ca7d04',
      'uuid_term' => 'b2d3e1a5d8b2fc87841c19fbaa3467f4',
      'field_base' => 'e388996b6d972d12b2af9d2ee5218a92',
      'field_instance' => '9ce96091b3af511fe58d2a23880ebf90',
      'taxonomy' => '1c9237965da67e601a8f86a023dedb14',
      'conditional_fields' => '748dcbcb7743eea6a9108f26ff75c7b6',
      'dependencies' => '5dfb473863f822ff2ea818bd85224f28',
      'image' => '51e666214b14645f8344f087f3948470',
      'views_view' => '4a4df842021e0b7fb58759cc2237b5a1',
      'ds_view_modes' => '342c538cd10b129d5399ca8fdf616722',
    ),
    'bc_review_feature' => array(
      'node' => 'af12c1b205eb52f999bb742c01879d80',
      'variable' => '32b253d3511967ba831a59f4b462ad0c',
      'field_base' => 'e18cf239dbd66028053b841921e079ee',
      'field_instance' => '74f129eb81ecb33ee989d51e18f22a51',
      'dependencies' => '43b64d75ef025c913542be2db059fc27',
      'views_view' => '263ea0e4383e6f78108d25e0aaeec151',
    ),
    'bc_permission_feature' => array(
      'user_permission' => '804430b3337fdddcdcbaf7ae92d3d4c4',
      'dependencies' => '6d096f66e10edeec83141350e310f645',
    ),
    'bc_user_feature' => array(
      'variable' => '6d93bc4671356379857bf24a984d2cc3',
      'field_base' => '1f5ef561ddae8084dcf20bca34c5a4ca',
      'field_instance' => '1c0e5a0523c07692f967ca2abe097121',
      'user_role' => '122ef70d7ea5334ffd922641f2858371',
      'dependencies' => '67189b62a4db8094508a4720e965d47e',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_modules_changed';
  $strongarm->value = FALSE;
  $export['features_modules_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__document';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'googleanalytics' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_alt';
  $strongarm->value = '[file:field_file_image_alt_text]';
  $export['file_entity_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_fields';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_file_type';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_scheme';
  $strongarm->value = 1;
  $export['file_entity_file_upload_wizard_skip_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_max_filesize';
  $strongarm->value = '';
  $export['file_entity_max_filesize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_title';
  $strongarm->value = '[file:field_file_image_title_text]';
  $export['file_entity_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/default/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '75';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'acquia';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1439869262;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = FALSE;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_backgroundcolor';
  $strongarm->value = '#000000';
  $export['media_backgroundcolor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_dialogclass';
  $strongarm->value = 'media-wrapper';
  $export['media_dialogclass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_draggable';
  $strongarm->value = '0';
  $export['media_draggable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_height';
  $strongarm->value = '280';
  $export['media_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_icon_base_directory';
  $strongarm->value = 'public://media-icons';
  $export['media_icon_base_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_minwidth';
  $strongarm->value = '400';
  $export['media_minwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_modal';
  $strongarm->value = '1';
  $export['media_modal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_opacity';
  $strongarm->value = '0.4';
  $export['media_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_position';
  $strongarm->value = 'center';
  $export['media_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_resizable';
  $strongarm->value = '0';
  $export['media_resizable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_width';
  $strongarm->value = '670';
  $export['media_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_zindex';
  $strongarm->value = '10000';
  $export['media_zindex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_default_active_menus';
  $strongarm->value = array(
    0 => 'menu-balas-de-coco',
    1 => 'devel',
    2 => 'menu-empresa',
    3 => 'features',
    4 => 'main-menu',
    5 => 'management',
    6 => 'navigation',
    7 => 'menu-quick-links',
    8 => 'menu-suporte',
    10 => 'user-menu',
  );
  $export['menu_default_active_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 493,
    2 => 485,
    3 => 253,
    4 => 250,
    5 => 247,
    6 => 246,
    7 => 245,
    8 => 243,
    9 => 242,
    10 => 237,
    11 => 127,
    12 => 126,
    13 => 125,
    14 => 124,
    15 => 123,
    16 => 122,
    17 => 121,
    18 => 119,
    19 => 118,
    20 => 117,
    21 => 63,
    22 => 62,
    23 => 61,
    24 => 60,
    25 => 59,
    26 => 58,
    27 => 56,
    28 => 55,
    29 => 48,
    30 => 44,
    31 => 31,
    32 => 30,
    33 => 29,
    34 => 28,
    35 => 27,
    36 => 24,
    37 => 23,
    38 => 21,
    39 => 15,
    40 => 14,
    41 => 13,
    42 => 12,
    43 => 11,
    44 => 10,
    45 => 8,
    46 => 7,
    47 => 6,
    48 => 5,
    49 => 3,
    50 => 2,
    51 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_review';
  $strongarm->value = array();
  $export['menu_options_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_review';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_comment';
  $strongarm->value = FALSE;
  $export['metatag_enable_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node';
  $strongarm->value = TRUE;
  $export['metatag_enable_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__article';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__page';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__product';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__review';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__bala_type';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__bala_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__flavours';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__flavours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__product_type';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__product_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__states';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__states'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__tags';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user__user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_has_revision_id';
  $strongarm->value = TRUE;
  $export['metatag_has_revision_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'epsacrop' => 1440888901,
    'admin_menu_toolbar' => 1440888901,
    'imagecache_coloractions' => 1440912435,
    'imagecache_customactions' => 1440912772,
    'imagecache_canvasactions' => 1440913846,
    'entity_view_mode' => 1440915866,
    'email' => 1440993060,
    'location_cck' => 1440993322,
    'location' => 1440993322,
    'location_user' => 1440994856,
    'location_taxonomize_location' => 1440998886,
    'location_taxonomy' => 1440998886,
    'location_taxonomize' => 1440998913,
    'page_manager' => 1441054513,
    'panels' => 1441057129,
    'bc_user' => 1441088990,
    'fboauth' => 1441091739,
    'panelizer' => 1441215848,
    'node_export' => 1441391864,
    'overlay' => 1441393341,
    'bc_review_feature' => 1441395544,
    'bc_permission_feature' => 1441416499,
    'bc_user_feature' => 1441416499,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1441246941';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_review';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_review';
  $strongarm->value = '0';
  $export['node_preview_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_review';
  $strongarm->value = 1;
  $export['node_submitted_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_bean_presentation';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_bean_presentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_file_audio';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'preview' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_file_audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_file_document';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'preview' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_file_document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_file_image';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'preview' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_file_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_file_video';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'preview' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_file_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_article';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_product';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_review';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'group_page' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_bala_type';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_bala_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_flavours';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_flavours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_product_type';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_product_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_states';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_states'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_tags';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_user_user';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_user_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:product_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:22:"panelizer_node:product";s:23:"allowed_layout_settings";a:11:{s:8:"flexible";b:1;s:6:"twocol";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:14:"twocol_stacked";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:13:"twocol_bricks";b:1;s:8:"homepage";b:1;s:10:"user_login";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:product_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:product_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:product_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:product_allowed_types';
  $strongarm->value = array(
    'node-node' => 'node-node',
    'search_result-search_result' => 'search_result-search_result',
    'search_form-search_form' => 'search_form-search_form',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_links-user_links' => 'user_links-user_links',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_language-node_form_language' => 'node_form_language-node_form_language',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_form_comment-node_form_comment' => 'node_form_comment-node_form_comment',
    'comment_reply_form-comment_reply_form' => 'comment_reply_form-comment_reply_form',
    'comment_created-comment_created' => 'comment_created-comment_created',
    'comment_links-comment_links' => 'comment_links-comment_links',
    'form-form' => 'form-form',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_help-page_help' => 'page_help-page_help',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_title-page_title' => 'page_title-page_title',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'term_name-term_name' => 'term_name-term_name',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_body-node_body' => 'node_body-node_body',
    'node_author-node_author' => 'node_author-node_author',
    'node_created-node_created' => 'node_created-node_created',
    'node_comment_form-node_comment_form' => 'node_comment_form-node_comment_form',
    'node_links-node_links' => 'node_links-node_links',
    'node_comment_wrapper-node_comment_wrapper' => 'node_comment_wrapper-node_comment_wrapper',
    'node_title-node_title' => 'node_title-node_title',
    'node_content-node_content' => 'node_content-node_content',
    'node_comments-node_comments' => 'node_comments-node_comments',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'file_display-file_display' => 'file_display-file_display',
    'file_content-file_content' => 'file_content-file_content',
    'node_form_metatags-node_form_metatags' => 'node_form_metatags-node_form_metatags',
    'user_password_form-user_password_form' => 'user_password_form-user_password_form',
    'user_login_form-user_login_form' => 'user_login_form-user_login_form',
    'user_register_form-user_register_form' => 'user_register_form-user_register_form',
    'dsc-dsc' => 'dsc-dsc',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'custom-custom' => 'custom-custom',
    'block-bc_blocks-bc_ssl' => 'block-bc_blocks-bc_ssl',
    'block-bc_blocks-bc_copyright' => 'block-bc_blocks-bc_copyright',
    'block-bc_blocks-bc_logo' => 'block-bc_blocks-bc_logo',
    'block-bc_blocks-bc_pres_logo' => 'block-bc_blocks-bc_pres_logo',
    'block-bean-bala-de-abacaxi' => 'block-bean-bala-de-abacaxi',
    'block-bean-bala-de-maracuja' => 'block-bean-bala-de-maracuja',
    'block-comment-recent' => 'block-comment-recent',
    'block-context_ui-editor' => 'block-context_ui-editor',
    'block-context_ui-devel' => 'block-context_ui-devel',
    'block-hybridauth-hybridauth' => 'block-hybridauth-hybridauth',
    'block-menu-menu-balas-de-coco' => 'block-menu-menu-balas-de-coco',
    'block-menu-devel' => 'block-menu-devel',
    'block-menu-menu-empresa' => 'block-menu-menu-empresa',
    'block-menu-features' => 'block-menu-features',
    'block-menu-menu-quick-links' => 'block-menu-menu-quick-links',
    'block-menu-menu-suporte' => 'block-menu-menu-suporte',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-shortcut-shortcuts' => 'block-shortcut-shortcuts',
    'block-statistics-popular' => 'block-statistics-popular',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'block-views-presentation-block' => 'block-views-presentation-block',
    'block-views-product_frontpage-balas_block' => 'block-views-product_frontpage-balas_block',
    'block-views-review_frontpage-review_block' => 'block-views-review_frontpage-review_block',
    'block-views-4d82c813e15c15066878df9cc8172b27' => 'block-views-4d82c813e15c15066878df9cc8172b27',
    'block-devel-execute_php' => 'block-devel-execute_php',
    'block-devel-switch_user' => 'block-devel-switch_user',
    'entity_form_field-bean:field_presentation_image' => 'entity_form_field-bean:field_presentation_image',
    'entity_form_field-comment:comment_body' => 'entity_form_field-comment:comment_body',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_tags' => 'entity_form_field-node:field_tags',
    'entity_form_field-node:field_image' => 'entity_form_field-node:field_image',
    'entity_form_field-node:field_product_type' => 'entity_form_field-node:field_product_type',
    'entity_form_field-node:field_bala_type' => 'entity_form_field-node:field_bala_type',
    'entity_form_field-node:field_stuffed_flavour' => 'entity_form_field-node:field_stuffed_flavour',
    'entity_form_field-node:field_bala_flavour' => 'entity_form_field-node:field_bala_flavour',
    'entity_form_field-node:field_product_image' => 'entity_form_field-node:field_product_image',
    'entity_form_field-node:field_product_price' => 'entity_form_field-node:field_product_price',
    'entity_form_field-node:field_product_promotion' => 'entity_form_field-node:field_product_promotion',
    'entity_form_field-node:field_review_rating' => 'entity_form_field-node:field_review_rating',
    'entity_form_field-file:field_file_image_alt_text' => 'entity_form_field-file:field_file_image_alt_text',
    'entity_form_field-file:field_file_image_title_text' => 'entity_form_field-file:field_file_image_title_text',
    'entity_form_field-user:field_user_name' => 'entity_form_field-user:field_user_name',
    'entity_form_field-user:field_user_phone' => 'entity_form_field-user:field_user_phone',
    'entity_form_field-user:field_user_location' => 'entity_form_field-user:field_user_location',
    'entity_form_field-user:field_user_document' => 'entity_form_field-user:field_user_document',
    'entity_field-bean:field_presentation_image' => 'entity_field-bean:field_presentation_image',
    'entity_field-comment:comment_body' => 'entity_field-comment:comment_body',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_tags' => 'entity_field-node:field_tags',
    'entity_field-node:field_image' => 'entity_field-node:field_image',
    'entity_field-node:field_product_type' => 'entity_field-node:field_product_type',
    'entity_field-node:field_bala_type' => 'entity_field-node:field_bala_type',
    'entity_field-node:field_stuffed_flavour' => 'entity_field-node:field_stuffed_flavour',
    'entity_field-node:field_bala_flavour' => 'entity_field-node:field_bala_flavour',
    'entity_field-node:field_product_image' => 'entity_field-node:field_product_image',
    'entity_field-node:field_product_price' => 'entity_field-node:field_product_price',
    'entity_field-node:field_product_promotion' => 'entity_field-node:field_product_promotion',
    'entity_field-node:field_review_rating' => 'entity_field-node:field_review_rating',
    'entity_field-file:field_file_image_alt_text' => 'entity_field-file:field_file_image_alt_text',
    'entity_field-file:field_file_image_title_text' => 'entity_field-file:field_file_image_title_text',
    'entity_field-user:field_user_name' => 'entity_field-user:field_user_name',
    'entity_field-user:field_user_phone' => 'entity_field-user:field_user_phone',
    'entity_field-user:field_user_location' => 'entity_field-user:field_user_location',
    'entity_field-user:field_user_document' => 'entity_field-user:field_user_document',
    'entity_field_extra-bean:title' => 'entity_field_extra-bean:title',
    'entity_field_extra-file:file' => 'entity_field_extra-file:file',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:hybridauth_identities' => 'entity_field_extra-user:hybridauth_identities',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:comment-count' => 'token-node:comment-count',
    'token-node:comment-count-new' => 'token-node:comment-count-new',
    'token-node:location' => 'token-node:location',
    'token-node:field_user_location' => 'token-node:field_user_location',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:metatag' => 'token-node:metatag',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:total-count' => 'token-node:total-count',
    'token-node:day-count' => 'token-node:day-count',
    'token-node:last-view' => 'token-node:last-view',
    'token-node:uuid' => 'token-node:uuid',
    'token-node:vuuid' => 'token-node:vuuid',
    'token-node:original' => 'token-node:original',
    'token-node:field_tags' => 'token-node:field_tags',
    'token-node:field_image' => 'token-node:field_image',
    'token-node:field_product_type' => 'token-node:field_product_type',
    'token-node:field_bala_type' => 'token-node:field_bala_type',
    'token-node:field_stuffed_flavour' => 'token-node:field_stuffed_flavour',
    'token-node:field_bala_flavour' => 'token-node:field_bala_flavour',
    'token-node:field_product_image' => 'token-node:field_product_image',
    'token-node:field_product_price' => 'token-node:field_product_price',
    'token-node:field_product_promotion' => 'token-node:field_product_promotion',
    'token-node:field_review_rating' => 'token-node:field_review_rating',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:metatag' => 'token-term:metatag',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:uuid' => 'token-term:uuid',
    'token-term:original' => 'token-term:original',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:type' => 'token-file:type',
    'token-file:download-url' => 'token-file:download-url',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:uuid' => 'token-file:uuid',
    'token-file:original' => 'token-file:original',
    'token-file:field_file_image_alt_text' => 'token-file:field_file_image_alt_text',
    'token-file:field_file_image_title_text' => 'token-file:field_file_image_title_text',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:roles' => 'token-user:roles',
    'token-user:role-names' => 'token-user:role-names',
    'token-user:role-ids' => 'token-user:role-ids',
    'token-user:hybridauth' => 'token-user:hybridauth',
    'token-user:location' => 'token-user:location',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:uuid' => 'token-user:uuid',
    'token-user:original' => 'token-user:original',
    'token-user:field_user_name' => 'token-user:field_user_name',
    'token-user:field_user_phone' => 'token-user:field_user_phone',
    'token-user:field_user_location' => 'token-user:field_user_location',
    'token-user:field_user_document' => 'token-user:field_user_document',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-array:join-path' => 'token-array:join-path',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-comment:cid' => 'token-comment:cid',
    'token-comment:hostname' => 'token-comment:hostname',
    'token-comment:name' => 'token-comment:name',
    'token-comment:mail' => 'token-comment:mail',
    'token-comment:homepage' => 'token-comment:homepage',
    'token-comment:title' => 'token-comment:title',
    'token-comment:body' => 'token-comment:body',
    'token-comment:url' => 'token-comment:url',
    'token-comment:edit-url' => 'token-comment:edit-url',
    'token-comment:created' => 'token-comment:created',
    'token-comment:changed' => 'token-comment:changed',
    'token-comment:parent' => 'token-comment:parent',
    'token-comment:node' => 'token-comment:node',
    'token-comment:author' => 'token-comment:author',
    'token-comment:uuid' => 'token-comment:uuid',
    'token-comment:original' => 'token-comment:original',
    'token-file-type:name' => 'token-file-type:name',
    'token-file-type:machine-name' => 'token-file-type:machine-name',
    'token-file-type:count' => 'token-file-type:count',
    'token-file-type:edit-url' => 'token-file-type:edit-url',
    'token-hybridauth:provider' => 'token-hybridauth:provider',
    'token-hybridauth:identifier' => 'token-hybridauth:identifier',
    'token-hybridauth:profileURL' => 'token-hybridauth:profileURL',
    'token-hybridauth:webSiteURL' => 'token-hybridauth:webSiteURL',
    'token-hybridauth:photoURL' => 'token-hybridauth:photoURL',
    'token-hybridauth:displayName' => 'token-hybridauth:displayName',
    'token-hybridauth:description' => 'token-hybridauth:description',
    'token-hybridauth:firstName' => 'token-hybridauth:firstName',
    'token-hybridauth:lastName' => 'token-hybridauth:lastName',
    'token-hybridauth:gender' => 'token-hybridauth:gender',
    'token-hybridauth:language' => 'token-hybridauth:language',
    'token-hybridauth:age' => 'token-hybridauth:age',
    'token-hybridauth:birthDay' => 'token-hybridauth:birthDay',
    'token-hybridauth:birthMonth' => 'token-hybridauth:birthMonth',
    'token-hybridauth:birthYear' => 'token-hybridauth:birthYear',
    'token-hybridauth:email' => 'token-hybridauth:email',
    'token-hybridauth:emailVerified' => 'token-hybridauth:emailVerified',
    'token-hybridauth:phone' => 'token-hybridauth:phone',
    'token-hybridauth:address' => 'token-hybridauth:address',
    'token-hybridauth:country' => 'token-hybridauth:country',
    'token-hybridauth:region' => 'token-hybridauth:region',
    'token-hybridauth:city' => 'token-hybridauth:city',
    'token-hybridauth:zip' => 'token-hybridauth:zip',
    'token-location:name' => 'token-location:name',
    'token-location:street' => 'token-location:street',
    'token-location:additional' => 'token-location:additional',
    'token-location:city' => 'token-location:city',
    'token-location:province' => 'token-location:province',
    'token-location:province_name' => 'token-location:province_name',
    'token-location:postal_code' => 'token-location:postal_code',
    'token-location:latitude' => 'token-location:latitude',
    'token-location:longitude' => 'token-location:longitude',
    'token-location:country' => 'token-location:country',
    'token-location:country_name' => 'token-location:country_name',
    'token-field_user_location:name:?' => 'token-field_user_location:name:?',
    'token-field_user_location:street:?' => 'token-field_user_location:street:?',
    'token-field_user_location:additional:?' => 'token-field_user_location:additional:?',
    'token-field_user_location:city:?' => 'token-field_user_location:city:?',
    'token-field_user_location:province:?' => 'token-field_user_location:province:?',
    'token-field_user_location:postal_code:?' => 'token-field_user_location:postal_code:?',
    'token-field_user_location:country:?' => 'token-field_user_location:country:?',
    'token-field_user_location:locpick:?' => 'token-field_user_location:locpick:?',
    'token-field_user_location:province_name:?' => 'token-field_user_location:province_name:?',
    'token-field_user_location:country_name:?' => 'token-field_user_location:country_name:?',
    'token-field_user_location:map_link:?' => 'token-field_user_location:map_link:?',
    'token-field_user_location:coords:?' => 'token-field_user_location:coords:?',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'token-metatag:title' => 'token-metatag:title',
    'token-metatag:description' => 'token-metatag:description',
    'token-metatag:abstract' => 'token-metatag:abstract',
    'token-metatag:keywords' => 'token-metatag:keywords',
    'token-metatag:robots' => 'token-metatag:robots',
    'token-metatag:news_keywords' => 'token-metatag:news_keywords',
    'token-metatag:standout' => 'token-metatag:standout',
    'token-metatag:rating' => 'token-metatag:rating',
    'token-metatag:referrer' => 'token-metatag:referrer',
    'token-metatag:generator' => 'token-metatag:generator',
    'token-metatag:rights' => 'token-metatag:rights',
    'token-metatag:image_src' => 'token-metatag:image_src',
    'token-metatag:canonical' => 'token-metatag:canonical',
    'token-metatag:shortlink' => 'token-metatag:shortlink',
    'token-metatag:publisher' => 'token-metatag:publisher',
    'token-metatag:author' => 'token-metatag:author',
    'token-metatag:original-source' => 'token-metatag:original-source',
    'token-metatag:prev' => 'token-metatag:prev',
    'token-metatag:next' => 'token-metatag:next',
    'token-metatag:revisit-after' => 'token-metatag:revisit-after',
    'token-metatag:content-language' => 'token-metatag:content-language',
    'token-metatag:geo.position' => 'token-metatag:geo.position',
    'token-metatag:geo.placename' => 'token-metatag:geo.placename',
    'token-metatag:geo.region' => 'token-metatag:geo.region',
    'token-metatag:icbm' => 'token-metatag:icbm',
    'token-metatag:refresh' => 'token-metatag:refresh',
    'token-metatag:fb:admins' => 'token-metatag:fb:admins',
    'token-metatag:fb:app_id' => 'token-metatag:fb:app_id',
    'token-metatag:shortcut icon' => 'token-metatag:shortcut icon',
    'token-metatag:icon_any' => 'token-metatag:icon_any',
    'token-metatag:icon_16x16' => 'token-metatag:icon_16x16',
    'token-metatag:icon_32x32' => 'token-metatag:icon_32x32',
    'token-metatag:icon_96x96' => 'token-metatag:icon_96x96',
    'token-metatag:icon_192x192' => 'token-metatag:icon_192x192',
    'token-metatag:apple-touch-icon' => 'token-metatag:apple-touch-icon',
    'token-metatag:apple-touch-icon_72x72' => 'token-metatag:apple-touch-icon_72x72',
    'token-metatag:apple-touch-icon_76x76' => 'token-metatag:apple-touch-icon_76x76',
    'token-metatag:apple-touch-icon_114x114' => 'token-metatag:apple-touch-icon_114x114',
    'token-metatag:apple-touch-icon_120x120' => 'token-metatag:apple-touch-icon_120x120',
    'token-metatag:apple-touch-icon_144x144' => 'token-metatag:apple-touch-icon_144x144',
    'token-metatag:apple-touch-icon_152x152' => 'token-metatag:apple-touch-icon_152x152',
    'token-metatag:apple-touch-icon_180x180' => 'token-metatag:apple-touch-icon_180x180',
    'token-metatag:apple-touch-icon-precomposed' => 'token-metatag:apple-touch-icon-precomposed',
    'token-metatag:apple-touch-icon-precomposed_72x72' => 'token-metatag:apple-touch-icon-precomposed_72x72',
    'token-metatag:apple-touch-icon-precomposed_76x76' => 'token-metatag:apple-touch-icon-precomposed_76x76',
    'token-metatag:apple-touch-icon-precomposed_114x114' => 'token-metatag:apple-touch-icon-precomposed_114x114',
    'token-metatag:apple-touch-icon-precomposed_120x120' => 'token-metatag:apple-touch-icon-precomposed_120x120',
    'token-metatag:apple-touch-icon-precomposed_144x144' => 'token-metatag:apple-touch-icon-precomposed_144x144',
    'token-metatag:apple-touch-icon-precomposed_152x152' => 'token-metatag:apple-touch-icon-precomposed_152x152',
    'token-metatag:apple-touch-icon-precomposed_180x180' => 'token-metatag:apple-touch-icon-precomposed_180x180',
    'token-metatag:google-site-verification' => 'token-metatag:google-site-verification',
    'token-metatag:p:domain_verify' => 'token-metatag:p:domain_verify',
    'token-metatag:msvalidate.01' => 'token-metatag:msvalidate.01',
    'token-metatag:yandex-verification' => 'token-metatag:yandex-verification',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'entity_view-bean' => 'entity_view-bean',
    'entity_view-comment' => 'entity_view-comment',
    'entity_view-node' => 'entity_view-node',
    'entity_view-file' => 'entity_view-file',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
  );
  $export['panelizer_node:product_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:product_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:product_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:product_default';
  $strongarm->value = array(
    'custom' => 'custom',
    'block' => 'block',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'token' => 'token',
    'entity_view' => 'entity_view',
    'other' => 'other',
  );
  $export['panelizer_node:product_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_case';
  $strongarm->value = '1';
  $export['pathauto_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_pattern';
  $strongarm->value = 'file/[file:name]';
  $export['pathauto_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_ignore_words';
  $strongarm->value = 'a, an, as, at, before, but, by, for, from, is, in, into, like, of, off, on, onto, per, since, than, the, this, that, to, up, via, with, de, o, os';
  $export['pathauto_ignore_words'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_component_length';
  $strongarm->value = '50';
  $export['pathauto_max_component_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_max_length';
  $strongarm->value = '50';
  $export['pathauto_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_ampersand';
  $strongarm->value = '0';
  $export['pathauto_punctuation_ampersand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_asterisk';
  $strongarm->value = '0';
  $export['pathauto_punctuation_asterisk'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_at';
  $strongarm->value = '0';
  $export['pathauto_punctuation_at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_backtick';
  $strongarm->value = '0';
  $export['pathauto_punctuation_backtick'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_back_slash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_back_slash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_caret';
  $strongarm->value = '0';
  $export['pathauto_punctuation_caret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_colon';
  $strongarm->value = '0';
  $export['pathauto_punctuation_colon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_comma';
  $strongarm->value = '0';
  $export['pathauto_punctuation_comma'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_dollar';
  $strongarm->value = '0';
  $export['pathauto_punctuation_dollar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_double_quotes';
  $strongarm->value = '0';
  $export['pathauto_punctuation_double_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_equal';
  $strongarm->value = '0';
  $export['pathauto_punctuation_equal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_exclamation';
  $strongarm->value = '0';
  $export['pathauto_punctuation_exclamation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_greater_than';
  $strongarm->value = '0';
  $export['pathauto_punctuation_greater_than'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_curly';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_curly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_parenthesis';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_parenthesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_left_square';
  $strongarm->value = '0';
  $export['pathauto_punctuation_left_square'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_less_than';
  $strongarm->value = '0';
  $export['pathauto_punctuation_less_than'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_percent';
  $strongarm->value = '0';
  $export['pathauto_punctuation_percent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_period';
  $strongarm->value = '0';
  $export['pathauto_punctuation_period'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_pipe';
  $strongarm->value = '0';
  $export['pathauto_punctuation_pipe'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_plus';
  $strongarm->value = '0';
  $export['pathauto_punctuation_plus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_question_mark';
  $strongarm->value = '0';
  $export['pathauto_punctuation_question_mark'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_quotes';
  $strongarm->value = '0';
  $export['pathauto_punctuation_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_curly';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_curly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_parenthesis';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_parenthesis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_right_square';
  $strongarm->value = '0';
  $export['pathauto_punctuation_right_square'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_semicolon';
  $strongarm->value = '0';
  $export['pathauto_punctuation_semicolon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_slash';
  $strongarm->value = '0';
  $export['pathauto_punctuation_slash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_tilde';
  $strongarm->value = '0';
  $export['pathauto_punctuation_tilde'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_underscore';
  $strongarm->value = '0';
  $export['pathauto_punctuation_underscore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_reduce_ascii';
  $strongarm->value = 0;
  $export['pathauto_reduce_ascii'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_separator';
  $strongarm->value = '-';
  $export['pathauto_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = FALSE;
  $export['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_update_action';
  $strongarm->value = '2';
  $export['pathauto_update_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_verbose';
  $strongarm->value = 0;
  $export['pathauto_verbose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'file' => TRUE,
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_product';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_review';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_allow_cli';
  $strongarm->value = 1;
  $export['shield_allow_cli'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_pass';
  $strongarm->value = 'renan2015';
  $export['shield_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_print';
  $strongarm->value = 'Hello, user: [user], pass: [pass]!';
  $export['shield_print'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shield_user';
  $strongarm->value = 'admin';
  $export['shield_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = '';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'BR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'renanmfd@gmail.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Menina das Balas';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '<em>Delícias</em> que derretem na boca!';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views';
  $strongarm->value = 1;
  $export['statistics_count_content_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views_ajax';
  $strongarm->value = 1;
  $export['statistics_count_content_views_ajax'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_enable_access_log';
  $strongarm->value = 1;
  $export['statistics_enable_access_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '11';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_node';
  $strongarm->value = array(
    'article' => 0,
    'page' => 0,
  );
  $export['uuid_features_entity_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'tags' => 0,
  );
  $export['uuid_features_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_assets_path';
  $strongarm->value = '';
  $export['uuid_features_file_assets_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_mode';
  $strongarm->value = 'inline';
  $export['uuid_features_file_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_node';
  $strongarm->value = array(
    'article' => 0,
    'page' => 0,
  );
  $export['uuid_features_file_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['uuid_features_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term';
  $strongarm->value = array(
    'tags' => 0,
  );
  $export['uuid_features_file_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_vocabulary_terms';
  $strongarm->value = 1;
  $export['uuid_features_vocabulary_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_block_hashes';
  $strongarm->value = array(
    '4d82c813e15c15066878df9cc8172b27' => 'clone_of_product_frontpage-balas_block',
  );
  $export['views_block_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vtabs__active_tab';
  $strongarm->value = 'edit-fset-other';
  $export['vtabs__active_tab'] = $strongarm;

  return $export;
}
