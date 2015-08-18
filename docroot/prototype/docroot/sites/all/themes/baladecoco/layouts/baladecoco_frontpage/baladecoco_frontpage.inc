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
    'hero_slider' => t('Hero Slider'),
    'slider' => t('Slider'),
    'baladecoco_news' => t('Bala de Coco News'),
  ),
);
