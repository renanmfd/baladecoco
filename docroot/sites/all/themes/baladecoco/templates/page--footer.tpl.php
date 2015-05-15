<?php
/**
 * @file
 * Template for front-page topbar.
 */
?>
<div class="footer">
  <div class="container">
    <?php foreach ($menus as $id => $menu): ?>
      <div class="menu <?php print $id; ?>">
        <?php print $menu; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
<div class="bottom">
  <div class="container">
    <?php if (!empty($copyright)): ?>
      <div class="copyright">
        <?php print $copyright; ?>
      </div>
    <?php endif; ?>
  </div>
</div>

