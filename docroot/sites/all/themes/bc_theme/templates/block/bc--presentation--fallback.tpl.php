<?php

/**
 * @file
 * View bc_theme_views_post_render() on template.php.
 */
?>
<div class="image-wrapper">
  <img src="" alt="<?php print $alt; ?>" class="active">
  <noscript>
    <?php print drupal_render($fallback); ?>
  </noscript>
</div>
