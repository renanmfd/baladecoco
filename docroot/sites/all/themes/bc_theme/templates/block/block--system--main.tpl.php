<?php

/**
 * @file
 * Template for outputting the main content block.
 *
 * This template overrides block.tpl.php to remove all wrappers.
 */
?>

<?php /*if (!$is_front): ?>
  <div class="container">
<?php endif;*/ ?>
<div id="main-content-wrapper">
  <?php print $content ?>
</div>
<?php /*if (!$is_front): ?>
  </div> 
<?php endif;*/ ?>
