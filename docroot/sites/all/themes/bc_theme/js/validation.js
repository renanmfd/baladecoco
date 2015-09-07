(function (window, document, $, Drupal) {

  /**
   * Validate EMAIL.
   *
   * @input String
   *
   * @return array(valid:<TRUE/FALSE>,message:<ERROR_MSG>).
   */
  var validateEmail = function(email) {
    var mail = email,
        valid = false,
        message = '';
    if (/\s/.test(mail)) { // If contain spaces.
      message = Drupal.t('Email cannot have spaces.');
    }
    else if (/[\[\\\/\*\?\+\^\!\$\(\)\[\]\}\{\=\|:'"<>~#%&,]/.test(mail)) { // If contain invalid chars.
      message = Drupal.t('Email cannot have special characters.');
    }
    else if (!/@/.test(mail)) { // If don't contain @ char.
      message = Drupal.t('Email must have the @ character.');
    }
    else if (!/\w@\w/.test(mail)) { // If not contain letters arround @ char.
      message = Drupal.t('Email must have letters or numbers arround @ char.');
    }
    /*else if (!/@(\w+.)+\w{2,4}$/.test(mail)) { // If not contain valid top-level domain.
      message = Drupal.t('Email must have a valid top-level domain.');
    }*/
    else { // Valid
      valid = true;
      message = Drupal.t('Please check your e-mail address for errors.');
    }
    return {valid: valid, message: message};
  };

  /**
   * Validate PASSWORD.
   *
   * @input String
   *
   * @return array(valid:<TRUE/FALSE>,message:<ERROR_MSG>).
   */
  var validatePassword = function(pass) {
    var message = '',
        valid = false;
    if (/\s/.test(pass)) { // If contain spaces.
      message = Drupal.t('Password must not contain spaces.');
    }
    else if (!/\w{6,}/.test(pass)) { // If not contain 6 or more chars.
      message = Drupal.t('Password must have at least 6 characters.');
    }
    else {
      valid = true;
      message = Drupal.t('Valid password!');
    }
    return {valid: valid, message: message};
  };

  /**
   * Validate NAME.
   *
   * @input String
   *
   * @return array(valid:<TRUE/FALSE>,message:<ERROR_MSG>).
   */
  var validateName = function(name) {
    var message = '',
        valid = false;
    if (!/\w+\s\w+/.test(name)) { // If not contain two words.
      message = Drupal.t('Enter first and last names.');
    }
    else if (/[\\\/\*\?\+\!\~\`\^\$\(\)\[\]\}\{\=\-:<>|#%]+/.test(name)) { // If contain invalid chars.
      message = Drupal.t('Name cannot have special chars.');
    }
    else {
      valid = true;
      message = Drupal.t('Valid name!');
    }
    return {valid: valid, message: message};
  };

  /** =============================================================
   * Drupal BEHAVIOR that attach validations to the correct fields.
   */
  Drupal.behaviors.validation = {
    attach: function (context, settings) {
      // Client-side validation of form items.
      var form_items = {
            '.user-register .form-item-mail': validateEmail,
            '.user-register .form-item-name': validateName,
            '.user-register .form-item-pass-pass1': validatePassword,
            '.user-register .form-item-field-user-name-und-0-value': validateName,
          },
          keyHandler = function(event) {
            var value = $(this).find('input').val() + String.fromCharCode(event.charCode),
                result = event.data(value);
            $(this).find('.form-validation-text').html(result.message);
            if (!result.valid) {
              $(this).addClass('form-not-valid');
              $(this).removeClass('form-valid');
            }
            else {
              $(this).addClass('form-valid');
              $(this).removeClass('form-not-valid');
            }
          },
          formHandler = function(event) {
            if ($(this).find('.form-not-valid').length > 0) {
              event.preventDefault();
              confirm(Drupal.t('You have one or more errors in your form. Fix it to submit.'));
            }
          };
      for (var item in form_items) {
        var description = $(item).find('.description').detach(),
            form = $(item).parents('form');
        $(item).keyup(form_items[item], keyHandler);
        $(item).append('<div class="form-validation-text"></div>');
        $(item).append('<div class="form-validation-icon"><span class="icon icon-checkmark"></span><span class="icon icon-cross"></span></div>');
        $(item).append(description);
        $(form).once().submit(formHandler);
      }
    }
  };

}(this, this.document, this.jQuery, Drupal));
