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
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <a href="<?php print $node_url; ?>" title="<?php print $title; ?>"<?php print $content_attributes; ?>>  

    <h3 class="review-title hidden"><?php print $title; ?></h3>

    <div class="review-body-wrapper">
      <quotes>
        <?php print render($content['body']); ?>
      </quotes>
    </div>


    <div class="review-info">
      <span class="name"><?php print render($author_name); ?></span>
      <?php if ($location): ?>
        <span class="junction"><?php print t('from'); ?></span>
        <span class="city"><?php print render($location); ?></span>
      <?php endif; ?>
      <span class="junction"><?php print t('in'); ?></span>
      <span class="date"><?php print $date; ?></span>
    </div>

  </a>

</div>
