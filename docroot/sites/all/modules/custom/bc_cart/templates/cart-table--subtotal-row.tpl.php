<?php

/**
 * @file
 * Template for user CART SUBTOTAL row.
 *
 * See template_preprocess_cart_table_subtotal_row() in bc_cart.module.
 */

?>

<div class="row subtotal cart-<?php print $cart['cid']; ?>">

  <?php /** SUB-TOTAL **/ ?>
  <div class="subtotal__value">
    <span class="label"><?php print t('Sub-total:'); ?></span>
    <span class="value"><?php print $subtotal; ?></span>
    <span class="currency">R$</span>
  </div>

</div>

