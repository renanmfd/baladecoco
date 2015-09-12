<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('BC Mobile Menu'),
  'category' => t('BC Layouts'),
  'icon' => 'mobile_menu.png',
  'theme' => 'panels__mobile_menu',
  'regions' => array(
    'logo' => t('Logo'),
    'main_menu' => t('Main Menu'),
    'quick_menu' => t('Quick Menu'),
    'others' => t('Others'),
  ),
);
