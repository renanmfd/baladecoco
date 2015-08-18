<?php
/**
 * @file
 * Image template file.
 */
?>

<div class="hero-slider-wrapper container clearfix <?php print !empty($contextual_links) ? ' contextual-links-region' : ''; ?>">
  <?php print $contextual_links; ?>
  <?php foreach ($images as $image): ?>
    <div class="hero-wrapper">
      <img src="" data-src="<?php print $image; ?>"/>
    </div>
  <?php endforeach; ?>
</div>
