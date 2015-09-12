<?php
/**
 * @file
 * Template for mobile menu.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['middle']: The only panel in the layout.
 */
?>
<section class="panel panel-mobile_menu" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="content">
    <?php if (!empty($content['logo'])): ?>
      <div class="panel-region logo clearfix">
        <?php print $content['logo']; ?>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($content['main_menu'])): ?>
      <div class="panel-region main_menu clearfix">
        <?php print $content['main_menu']; ?>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($content['quick_menu'])): ?>
      <div class="panel-region quick_menu clearfix">
        <?php print $content['quick_menu']; ?>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($content['others'])): ?>
      <div class="panel-region others clearfix">
        <?php print $content['others']; ?>
      </div>
    <?php endif; ?>
  </div> 
</section>
