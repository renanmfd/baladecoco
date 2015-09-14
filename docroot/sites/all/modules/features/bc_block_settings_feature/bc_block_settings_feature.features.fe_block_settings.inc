<?php
/**
 * @file
 * bc_block_settings_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bc_block_settings_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bc_blocks-bc_copyright'] = array(
    'cache' => 8,
    'css_class' => 'copyright',
    'custom' => 0,
    'delta' => 'bc_copyright',
    'module' => 'bc_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bc_blocks-bc_logo'] = array(
    'cache' => 8,
    'css_class' => 'site-name',
    'custom' => 0,
    'delta' => 'bc_logo',
    'module' => 'bc_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bc_blocks-bc_pres_logo'] = array(
    'cache' => 8,
    'css_class' => 'logo',
    'custom' => 0,
    'delta' => 'bc_pres_logo',
    'module' => 'bc_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bc_blocks-bc_ssl'] = array(
    'cache' => 8,
    'css_class' => 'baladecoco-certificate',
    'custom' => 0,
    'delta' => 'bc_ssl',
    'module' => 'bc_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['bc_cart-bc_cart_cart'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bc_cart_cart',
    'module' => 'bc_cart',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bc_cart-bc_cart_link'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bc_cart_link',
    'module' => 'bc_cart',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-bala-de-abacaxi'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bala-de-abacaxi',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-bala-de-abacaxi-0'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bala-de-abacaxi-0',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-bala-de-morango'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bala-de-morango',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-devel'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'editor',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['hybridauth-hybridauth'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hybridauth',
    'module' => 'hybridauth',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-administration'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-administration',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 11,
      'moderator' => 16,
    ),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-balas-de-coco'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-balas-de-coco',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-empresa'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-empresa',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-quick-links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-quick-links',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-suporte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-suporte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-mobile_menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mobile_menu',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bc_theme',
        'weight' => 5,
      ),
      'rubik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 10,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-review_frontpage-review_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'review_frontpage-review_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bc_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bc_theme',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
