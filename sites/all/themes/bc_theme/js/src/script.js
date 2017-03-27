/**
 * @file
 * bootstrap.js
 *
 * Provides general enhancements and fixes to Bootstrap's JS files.
 */

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";

  console.log('script.js running...');
  
  // Cart button toggle.
  Drupal.behaviors.cart_button_toggle = {
    attach: function (context, settings) {
      $('.cart-toggle-js').on('click', function (event) {
        event.preventDefault();
        $('.cart-summary').toggleClass('summary-open');
      })
      $('.cart-summary').on('mouseleave', function () {
        $(this).removeClass('summary-open');
      });
    }
  };

})(jQuery, Drupal);
