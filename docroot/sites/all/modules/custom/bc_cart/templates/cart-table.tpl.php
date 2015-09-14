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

<section id="cart-section">
  <div class="container">

    <h2><?php print t('My Cart'); ?></h2>

    <?php /** TABLE **/ ?>
    <div class="cart-table table">

      <?php /** TABLE HEADER ======================================= **/ ?>
      <div class="theader">
        <div class="cell cell__1 first"><?php print t('Product'); ?></div>
        <div class="cell cell__2"><?php print t('Quantity'); ?></div>
        <div class="cell cell__3"><?php print t('Unit Value'); ?></div>
        <div class="cell cell__4 last"><?php print t('Total'); ?></div>
      </div>

      <?php /** TABLE BODY ========================================= **/ ?>
      <div class="tbody">
        <?php foreach ($rows as $row): ?>
          <?php print $row; ?>
        <?php endforeach; ?>
      </div>
      
      <?php /** TABLE SHIPPING ===================================== **/ ?>
      <div class="tshipping">
        <?php print $shipping; ?>
      </div>
      
      <?php /** TABLE SUB-TOTAL ==================================== **/ ?>
      <div class="tsubtotal">
        <?php print $subtotal; ?>
      </div>

    </div>
  </div>
</section>

