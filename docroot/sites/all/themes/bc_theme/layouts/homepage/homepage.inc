<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('BC Homepage'),
  'category' => t('BC Layouts'),
  'icon' => 'homepage.png',
  'theme' => 'panels__homepage',
  'regions' => array(
    'home_top' => t('Home Top'),
    'home_middle' => t('Home Middle'),
    'home_bottom' => t('Home Bottom'),
  ),
);
