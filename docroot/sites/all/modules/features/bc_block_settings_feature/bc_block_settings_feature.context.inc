<?php
/**
 * @file
 * bc_block_settings_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bc_block_settings_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general-block-context';
  $context->description = 'General block placement';
  $context->tag = 'blocks';
  $context->conditions = array(
    'default' => array(
      'values' => array(
        'context_condition_default' => 'context_condition_default',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bc_blocks-bc_logo' => array(
          'module' => 'bc_blocks',
          'delta' => 'bc_logo',
          'region' => 'topbar',
          'weight' => '-15',
        ),
        'menu-menu-quick-links' => array(
          'module' => 'menu',
          'delta' => 'menu-quick-links',
          'region' => 'topbar',
          'weight' => '-14',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'topbar',
          'weight' => '-13',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'help',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-balas-de-coco' => array(
          'module' => 'menu',
          'delta' => 'menu-balas-de-coco',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-empresa' => array(
          'module' => 'menu',
          'delta' => 'menu-empresa',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu-menu-suporte' => array(
          'module' => 'menu',
          'delta' => 'menu-suporte',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'bc_blocks-bc_ssl' => array(
          'module' => 'bc_blocks',
          'delta' => 'bc_ssl',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'bc_blocks-bc_copyright' => array(
          'module' => 'bc_blocks',
          'delta' => 'bc_copyright',
          'region' => 'bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General block placement');
  t('blocks');
  $export['general-block-context'] = $context;

  return $export;
}
