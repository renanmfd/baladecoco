<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('BC User Login'),
  'category' => t('BC Layouts'),
  'icon' => 'user_login.png',
  'theme' => 'panels__user_login',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
    'bottom' => t('Bottom'),
  ),
);
