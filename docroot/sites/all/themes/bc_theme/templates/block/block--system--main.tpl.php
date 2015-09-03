<?php

/**
 * @file
 * Template for outputting the main content block.
 *
 * This template overrides block.tpl.php to remove all wrappers.
 */
?>

<?php if (!$is_front): ?>
  <div class="container">
<?php endif; ?>
  <?php print $content ?>
<?php if (!$is_front): ?>
  </div> 
<?php endif; ?>
