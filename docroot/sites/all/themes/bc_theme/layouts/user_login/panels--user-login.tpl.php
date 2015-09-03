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
  <h3 class="hidden"><?php print t('Topbar'); ?></h3>
  <div class="container">
    <div class="panel-region top clearfix"><?php print $content['top']; ?></div>
    <div class="panel-region left clearfix"><?php print $content['left']; ?></div>
    <div class="panel-region right clearfix"><?php print $content['right']; ?></div>
    <div class="panel-region bottom clearfix"><?php print $content['bottom']; ?></div>
  </div> 
</section>
