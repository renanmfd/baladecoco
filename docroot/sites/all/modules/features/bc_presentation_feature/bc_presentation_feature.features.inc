<?php
/**
 * @file
 * bc_presentation_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bc_presentation_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bc_presentation_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bc_presentation_feature_image_default_styles() {
  $styles = array();

  // Exported image style: presentation_desktop.
  $styles['presentation_desktop'] = array(
    'label' => 'Presentation Desktop',
    'effects' => array(
      5 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1280,
          'height' => 300,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: presentation_desktop_superwide.
  $styles['presentation_desktop_superwide'] = array(
    'label' => 'Presentation Desktop Superwide',
    'effects' => array(
      17 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1700,
          'height' => 300,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: presentation_desktop_wide.
  $styles['presentation_desktop_wide'] = array(
    'label' => 'Presentation Desktop Wide',
    'effects' => array(
      16 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1440,
          'height' => 300,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: presentation_mobile.
  $styles['presentation_mobile'] = array(
    'label' => 'Presentation Mobile',
    'effects' => array(
      3 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 480,
          'height' => 300,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: presentation_mobile_landscape.
  $styles['presentation_mobile_landscape'] = array(
    'label' => 'Presentation Mobile Landscape',
    'effects' => array(
      15 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 768,
          'height' => 300,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: presentation_tablet.
  $styles['presentation_tablet'] = array(
    'label' => 'Presentation Tablet',
    'effects' => array(
      4 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1024,
          'height' => 300,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => -10,
      ),
    ),
  );

  return $styles;
}
