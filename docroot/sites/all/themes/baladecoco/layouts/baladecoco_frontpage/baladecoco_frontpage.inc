<?php

/**
 * @file
 * Plugin definition file for panel's layout.
 */

/**
 * Implementation of hook_panels_layouts().
 */
// Plugin definition.
$plugin = array(
  'title' => t('Front page'),
  'category' => t('Bala de Coco'),
  'icon' => 'baladecoco_frontpage.png',
  'theme' => 'panels_baladecoco_frontpage',
  'regions' => array(
    'slider' => t('Slider'),
    'slider_left' => t('Slider Left'),
    'slider_right' => t('Slider Right'),
    'baladecoco_news' => t('Bala de Coco News'),
  ),
);
