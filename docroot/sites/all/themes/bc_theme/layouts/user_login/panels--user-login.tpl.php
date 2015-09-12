<?php
/**
 * @file
 * Template for /user/login page.
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
<section class="panel panel-user_login" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <h3 class="hidden"><?php print t('User Login'); ?></h3>
  <div class="content">
    <?php if (!empty($content['top'])): ?>
      <div class="panel-region top clearfix">
        <div class="container">
          <?php print $content['top']; ?>
        </div>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($content['left'])): ?>
      <div class="panel-region left clearfix">
        <div class="container">
          <?php print $content['left']; ?>
        </div>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($content['right'])): ?>
      <div class="panel-region right clearfix">
        <div class="container">
          <?php print $content['right']; ?>
        </div>
      </div>
    <?php endif; ?>
    
    <?php if (!empty($content['bottom'])): ?>
      <div class="panel-region bottom clearfix">
        <div class="container">
          <?php print $content['bottom']; ?>
        </div>
      </div>
    <?php endif; ?>
  </div> 
</section>
