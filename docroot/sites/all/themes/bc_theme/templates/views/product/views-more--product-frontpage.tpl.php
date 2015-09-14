<?php

/**
 * @file
 * Theme the more link.
 *
 * - $view: The view object.
 * - $more_url: the url for the more link.
 * - $link_text: the text for the more link.
 *
 * @ingroup views_templates
 */
?>

<div class="more-link">
  <a class="show-more" href="<?php print $more_url ?>" title="<?php print t('Click to see more Balas de Coco.'); ?>" data-toggle="tooltip">
    <?php print $link_text; ?>
  </a>
</div>
