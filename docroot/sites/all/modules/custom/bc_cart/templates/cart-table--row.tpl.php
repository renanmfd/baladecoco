<?php

/**
 * @file
 * Template for user CART ITEM.
 *
 * See template_preprocess_cart_table() in bc_cart.module.
 */

?>

<div class="row product product-<?php print $nid; ?>">

  <?php /** PRODUCT IMAGE **/ ?>
  <div class="cell cell__1 first">
    <div class="product__image">
      <?php print render($image); ?>
    </div>
  </div>

  <?php /** PRODUCT TITLE **/ ?>
  <div class="cell cell__2">

    <div class="product__title">
      <a href="node/<?php print $nid; ?>">#<?php print $nid; ?></a>
      <span ><?php print $node->title; ?></span>
    </div>

    <?php if (isset($breadcrumb)): ?>
      <div class="product__breadcrumb">
        <span ><?php print $breadcrumb; ?></span>
      </div>
    <?php endif; ?>

    <div class="product__links">
      <a href="cart/<?php print $nid; ?>/delete?destination=cart" class="btn btn-cart-item btn-cart-remove"><?php print t('Remove'); ?></a>
      <a href="cart/<?php print $nid; ?>/save?destination=cart" class="btn btn-cart-item btn-cart-remove"><?php print t('Save'); ?></a>
    </div>

  </div>

  <?php /** PRODUCT QUANTITY **/ ?>
  <div class="cell cell__3">
    <div class="vertical-align">
      <div>
  
        <div class="product__quantity-form"><?php print render($quantity_form); ?></div>

        <div class="product__quantity">
          <span class="value"><?php print (intval($item['quantity'])/BC_CART_WEIGHT_UNIT); ?></span>
          <span class="currency">Kg</span>
        </div>

        <div class="product__unit-price">
          <span class="value"><?php print $price; ?></span>
          <span class="currency">R$/Kg</span>
        </div>

      </div>
    </div>
  </div>

  <?php /** PRODUCT TOTAL **/ ?>
  <div class="cell cell__4 last">
    <div class="vertical-align">
      <div>

        <div class="product__total-price">
          <span class="value"><?php print $total_price; ?></span>
          <span class="currency">R$</span>
        </div>

        <?php if (!empty($discount)): ?>
          <div class="product__discount">
            <span><?php print $discount; ?></span>
          </div>
        <?php endif; ?>

      </div>
    </div>
  </div>

</div>

