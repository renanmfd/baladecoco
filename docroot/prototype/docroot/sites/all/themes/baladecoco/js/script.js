(function ($, Drupal, window, document) {
  Drupal.behaviors.main_carousel = {
    attach: function (context, settings) {
      $('#carousel-main .item:first-child').addClass('active');
    }
  };
})(jQuery, Drupal, window, document);
