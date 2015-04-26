<?php

/**
 * @file
 * Template implementation to display the panel's layout.
 */
?>
<section class="curtain" style="background-color: #fff; background-image: url(<?php print !empty($frontpage_backgroundimage) ? $frontpage_backgroundimage : ''; ?>)">
  <header class="global-header <?php print drupal_static('nas_header_class'); ?>">
    <?php print $content['header']; ?>
  </header>
</section>
<div class="curtain-wrapper">
  <header class="global-header standard">
    <?php print $content['top']; ?>
  </header>
  <section class="global-content">
    <?php if (!empty($featured_frontpage_mobile_content)): ?>
      <?php print $featured_frontpage_mobile_content; ?>
    <?php endif; ?>
    <div class="homepage-first-row row space-top double" data-equalizer>
      <?php print $content['featured']; ?>
    </div>
    <?php print $content['baladecoco_news']; ?>
  </section>
</div>
<?php print $content['footer']; ?>
