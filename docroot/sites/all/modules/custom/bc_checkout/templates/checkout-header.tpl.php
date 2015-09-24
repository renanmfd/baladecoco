<?php

/**
 * @file
 * Template for user CART.
 * 
 * See template_preprocess_cart_table() in bc_cart.module.
 * 
 * @vars
 *    $items = array($nid, $quantity, $node, $image, $price).
 */

?>

<section id="checkout-header">
  <div class="container">
    
    <h2 class="hidden"><?php print t('Checkout Header'); ?></h2>

    <?php /** BREADCRUMB **/ ?>
    <ul class="breadcrumb checkout">
      <?php foreach ($links as $link): ?>
        <li<?php print $link['attributes_string']; ?>>
          <span class="breadcrumb__item__index"><?php print $link['index']; ?></span>
          <span class="breadcrumb__item__title"><?php print $link['title']; ?></span>
        </li>
      <?php endforeach; ?>
    </ul>

  </div>
</section>

