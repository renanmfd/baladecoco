<?php

/**
 * @file
 * Template for user CART SUBTOTAL row.
 *
 * See template_preprocess_cart_table_subtotal_row() in bc_cart.module.
 */

?>

<div class="row subtotal cart-<?php print $cart['cid']; ?>">

  <?php /** CUPOM **/ ?>
  <div class="subtotal__cupom">
    <?php print render($cupom_form); ?>
  </div>

  <?php /** SUB-TOTAL WITH CUPOM **/ ?>
  <?php if ($cupom_isset): ?>
    <div class="subtotal__value">

      <div class="label"><?php print t('Sub-total:'); ?></div>

      <div class="subtotal__value__nocupom">
        <span class="value"><?php print $subtotal; ?></span>
        <span class="currency">R$</span>
      </div>

      <div class="subtotal__value__discount">
        <span class="value">-<?php print $discount; ?></span>
        <span class="currency">R$</span>
        <span class="currency percentage">(<?php print $percetage; ?>%)</span>
      </div>

      <div class="subtotal__value__cupom">
        <span class="value"><?php print $subtotal_cupom; ?></span>
        <span class="currency">R$</span>
      </div>

    </div>
  <?php /** SUB-TOTAL WITHOUT CUPOM **/ ?>
  <?php else: ?>
    <div class="subtotal__value">
      <span class="label"><?php print t('Sub-total:'); ?></span>
      <span class="value"><?php print $subtotal; ?></span>
      <span class="currency">R$</span>
    </div>
  <?php endif; ?>

</div>

