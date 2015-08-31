(function (window, document, $) {

   Drupal.behaviors.presentation_adaptative_image = {
    attach: function (context, settings) {
      // PRESENTATION - Adaptative image load on presentation region.
      var result = null,
        element = null,
        src = '',
        image = document.querySelector('.image-wrapper .active');
      result = detectBreakpoint();
      element = document.querySelector('.images-holder .' + result);
      if (element) {
        src = element.getAttribute('data-src');
        image.style.display = 'none';
        image.setAttribute('src', src);
        $(image).fadeIn(3000);
      }
    }
  };

  Drupal.behaviors.navigation_fixed = {
    attach: function (context, settings) {
      // TOPBAR - Make topbar sticky when scroll down.
      if ($('#navigation').length) {
        var nav = $('#navigation').offset().top;
        $(window).scroll(function(e) {
          var offset = $(window).scrollTop();
          if (offset > nav) {
            $('#navigation').addClass('sticky');
          }
          else {
            $('#navigation.sticky').removeClass('sticky');
          }
        });
      }
    }
  };

  Drupal.behaviors.general_behaviors = {
    attach: function (context, settings) {
      // Add JS class to HTML tag
      $('html').addClass('js');
      // Tooltips
      //Tipped.create('.simple-tooltip');
      // Chosen
      /*$('.chosen-select').chosen({
        disable_search: true,
        display_disabled_options: false,
        display_selected_options: false,
      });*/
    }
  };

  Drupal.behaviors.bc_homepage = {
    attach: function (context, settings) {
      // BC Homepage - Menu side-collapsed on mobile
      $('#navigation nav.menu-wrapper h3').click(function(e) {
        e.preventDefault();
        if ($('body').hasClass('mobile-menu-open')) {
          $('body').removeClass('mobile-menu-open');
        }
        else {
          $('body').addClass('mobile-menu-open');
        }
      });
      // BC Homepage - Menu close button on mobile
      $('#mobile-menu .close-wrapper a').click(function(e) {
        e.preventDefault();
        $('body').removeClass('mobile-menu-open');
      });
      // BC Homepage - Reviews equilizer
      var equalizer = null;
      $(document).ready(reviewTeaserEqualizer);
      $(window).on('resize', function(e) {
        clearTimeout(equalizer);
        equalizer = setTimeout(reviewTeaserEqualizer, 200);
      });
    }
  };
  
  Drupal.behaviors.cart_behaviors = {
    attach: function (context, settings) {
      /*$('.flexslider').flexslider({
        animation: "slide"
      });*/
    }
  };
  
  /**
   * Function to equalize height of .review-teaser's on homepage.
   * This is based on screen size, to differantiate how many containers
   * per row we have. Mobile: 1 per row; Table: 2 per row; Desktop: 4 
   * per row. The resize function is timed out so we only need to do
   * the calculations once resizing is finish.
   */
  function reviewTeaserEqualizer() {
    var screen = window.innerWidth;
    if (screen >= 768 && screen < 1024) {
      $('.review-teaser:nth-child(2n-1)').each(function(index) {
        var current_height = $(this).height(),
          next_height = $(this).next().height();
        if (current_height > next_height) {
          $(this).next().height(current_height);
        }
        else {
          $(this).height(next_height);
        }
      });
    }
    else if (screen >= 1024) {
      var bigger = 0;
      $('.review-teaser').each(function(index) {
        if ($(this).height() > bigger) {
          bigger = $(this).height();
        }
      });
      $('.review-teaser').height(bigger);
    }
    else {
       $('.review-teaser').height('');
    }
  };

  /**
   * Function that detect witch breakpoint the window is in.
   * Used on presentation adaptative images.
   */
  function detectBreakpoint() {
    var breakpoints = {'mobile': 0, 'mobile-landscape': 480, 'tablet': 768, 'desktop': 1024, 'desktop-wide': 1280, 'desktop-superwide': 1440},
      width = window.innerWidth,
      result = '';
    if (width > breakpoints['desktop-superwide']) result = 'desktop-superwide';
    else if (width > breakpoints['desktop-wide']) result = 'desktop-wide';
    else if (width > breakpoints['desktop']) result = 'desktop';
    else if (width > breakpoints['tablet']) result = 'tablet';
    else if (width > breakpoints['mobile-landscape']) result = 'mobile-landscape';
    else if (width > breakpoints['mobile']) result = 'mobile';
    return result;
  };

}(this, this.document, this.jQuery));
