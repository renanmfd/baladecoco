<?php

/**
 * @file
 * Add to cart callback for bc_cart module.
 */

/**
 * Callback to Add products into the cart.
 */
function _bc_cart_add_item($node, $quantity) {
  // Check if this node CT is a valid product (set in admin ui).
  if (_bc_cart_node_is_product($node)) {
    cart_add_item($node->nid, $quantity);
  }

  // Redirect to destination or homepage.
  $path = isset($_GET['destination'])? $_GET['destination'] : 'cart';
  drupal_goto($path);
}

/**
 * Callback to Add products into the cart for when javacript is not enabled/existent.
 */
function _bc_cart_add_item_nojs($node, $quantity) {

}

/**
 * Callback for button 'Save', to save item for later.
 */
function _bc_cart_save_item($node) {
  cart_save_item($node->nid);

  // Redirect to destination or homepage.
  $path = isset($_GET['destination'])? $_GET['destination'] : 'cart';
  drupal_goto($path);
}

/**
 * Callback for button 'Delete', to remove an item from the cart.
 */
function _bc_cart_delete_item($node) {
  cart_delete_item($node->nid);

  // Redirect to destination or homepage.
  $path = isset($_GET['destination'])? $_GET['destination'] : 'cart';
  drupal_goto($path);
}

/**
 * HELPER - Check if node type is correct.
 */
function _bc_cart_node_is_product($node) {
  return ($node->type == 'product')? TRUE : FALSE;
}
