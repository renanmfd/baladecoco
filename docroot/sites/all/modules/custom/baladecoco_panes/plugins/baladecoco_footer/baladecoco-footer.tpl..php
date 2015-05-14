<?php
/**
 * @file
 * Image template file.
 */
?>

<div class="baladecoco-image <?php print !empty($contextual_links) ? 'contextual-links-region' : ''; ?>">
  <?php print $contextual_links; ?>
  <div class="image-wrapper">
    <?php print $image; ?>
  </div>
</div>
