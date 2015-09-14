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

    <div class="bala-title-wrapper">

      <h3 class="bala-title">
        <?php print render($bala_flavour); ?>
        <span class="bala-type type-<?php print $bala_type['tid']; ?>">
          <?php print render($bala_type); ?>
          <?php if ($bala_type['tid'] == 41 or $bala_type['tid'] == 46) print t('with'); ?>
        </span>
        <?php if ($bala_type['tid'] == 41 or $bala_type['tid'] == 46): ?>
          <span class="stuffed-type type-<?php print $stuffed_flavour['tid']; ?>"><?php print render($stuffed_flavour); ?></span>
        <?php endif; ?>
      </h3>

      <div class="bala-price">
        <div>
          <span class="price">
            <?php print render($price); ?>
            <em class="currency"><?php print 'R$/Kg'; ?></em>
          </span>
        </div>
      </div>

    </div>

    <div class="bala-image-wrapper">
      <?php print render($image); ?>
    </div>
  </a>

  <?php print theme('item_list', array('items' => $links)); ?>
</div>
