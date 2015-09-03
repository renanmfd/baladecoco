<?php

/**
 * @file
 * Custom theme implementation to display a node for product content type.
 *
 * @see bc_theme_preprocess_node().
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>

  <div class="review post-info">
    <div class="review-wrapper">
      <span><?php print $name; ?></span>
      <span><?php print $date; ?></span>
    </div>
  </div>

  <div class="review main-info">
    <div class="review-wrapper">
      <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      
      <?php print render($content['field_review_rating']); ?>

      <?php print render($content['body']); ?>
    </div>
  </div>

</div>
