<?php
/**
 * @file
 * bc_menu_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bc_menu_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-administration.
  $menus['menu-administration'] = array(
    'menu_name' => 'menu-administration',
    'title' => 'Administration',
    'description' => 'Menu for administrative tasks to be performed by the moderator or admin.',
  );
  // Exported menu: menu-balas-de-coco.
  $menus['menu-balas-de-coco'] = array(
    'menu_name' => 'menu-balas-de-coco',
    'title' => 'Balas de Coco',
    'description' => '',
  );
  // Exported menu: menu-empresa.
  $menus['menu-empresa'] = array(
    'menu_name' => 'menu-empresa',
    'title' => 'Empresa',
    'description' => '',
  );
  // Exported menu: menu-quick-links.
  $menus['menu-quick-links'] = array(
    'menu_name' => 'menu-quick-links',
    'title' => 'Quick Links',
    'description' => '',
  );
  // Exported menu: menu-suporte.
  $menus['menu-suporte'] = array(
    'menu_name' => 'menu-suporte',
    'title' => 'Suporte',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');
  t('Balas de Coco');
  t('Empresa');
  t('Main menu');
  t('Menu for administrative tasks to be performed by the moderator or admin.');
  t('Quick Links');
  t('Suporte');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
