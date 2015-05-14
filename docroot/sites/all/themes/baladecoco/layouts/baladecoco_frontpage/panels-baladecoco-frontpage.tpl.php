<?php

/**
 * @file
 * Template implementation to display the panel's layout.
 */
?>
<section class="curtain">
  <header class="global-header">
    <?php print $content['header']; ?>
  </header>
</section>
<div class="curtain-wrapper">
  <header class="global-header standard">
    <?php print $content['top']; ?>
  </header>
  <section class="global-content">
    <div class="homepage-first-row row space-top double" data-equalizer>
      <?php print $content['featured']; ?>
    </div>
    <?php print $content['baladecoco_news']; ?>
  </section>
</div>
<?php print $content['footer']; ?>
