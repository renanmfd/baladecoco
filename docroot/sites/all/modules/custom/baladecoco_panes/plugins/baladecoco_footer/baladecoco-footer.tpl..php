<?php
/**
 * @file
 * Local Chapters & Centers template file.
 */
?>

<section id="footer" class="baladecoco-footer">
  <div class="baladecoco-footer-wrapper <?php print !empty($contextual_links) ? 'contextual-links-region' : ''; ?>">
    <?php print $contextual_links; ?>
    
	<?php if (!empty($title)): ?>
	  <h2><?php print $title; ?></h2>
	<?php endif; ?>
	
	<div class="footer-image">
      <?php print $image; ?>
	</div>
	
	<div class="first-menu-wrapper">
      <?php print $menu_1; ?>
	</div>
	
	<?php if (!empty($menu_2)): ?>
	  <div class="second-menu-wrapper">
        <?php print $menu_2; ?>
	  </div>
	<?php endif; ?>
  </div>
</section>
