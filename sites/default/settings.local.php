<?php

if (!class_exists('DrupalFakeCache')) {
  $conf['cache_backends'][] = 'includes/cache-install.inc';
}
// Default to throwing away cache data.
$conf['cache_default_class'] = 'DrupalFakeCache';
// Rely on the DB cache for form caching - otherwise forms fail.
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
