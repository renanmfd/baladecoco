<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="carousel-frame">
  <?php if(!empty($frame)): ?>
    <?php print $frame; ?>
  <?php endif; ?>
  <div id="carousel-main" class="carousel slide <?php print $classes; ?>" data-ride="carousel" style="width: <?php print BC_BALA_SLIDER_WIDTH; ?>px;">
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <?php print $title; ?>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <!-- Indicators -->
    <ol class="carousel-indicators">
      <li data-target="#carousel-main" data-slide-to="0" class="active"></li>
      <?php for ($i = 1; $i < $result_count; $i++): ?>
        <li data-target="#carousel-main" data-slide-to="<?php print $i; ?>"></li>
      <?php endfor; ?>
    </ol>

    <!-- Wrapper for slides -->
    <div class="carousel-inner" role="listbox">
      <?php if ($rows): ?>
        <?php print $rows; ?>
      <?php endif; ?>
    </div>

    <!-- Controls -->
    <div class="left carousel-control" href="#carousel-main" role="button" data-slide="prev">
      <span class="glyphicon glyphicon-chevron-left" aria-hidden="true">
        <?php if(!empty($left)): ?>
          <?php print $left; ?>
        <?php endif; ?>
      </span>
      <span class="sr-only"><?php print t('Previous'); ?></span>
    </div>
    
    <div class="right carousel-control" href="#carousel-main" role="button" data-slide="next">
      <span class="glyphicon glyphicon-chevron-right" aria-hidden="true">
        <?php if(!empty($right)): ?>
          <?php print $right; ?>
        <?php endif; ?>
      </span>
      <span class="sr-only"><?php print t('Next'); ?></span>
    </div>
  </div>
</div>
