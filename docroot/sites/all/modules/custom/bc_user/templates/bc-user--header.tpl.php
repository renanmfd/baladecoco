<div class="<?php print $classes; ?>">
  <div class="link login-link">
    <a href="<?php print url('modal/nojs/user/login'); ?>" data-toggle="tooltip" 
    data-placement="bottom" title="<?php print t('Login'); ?>" 
    class="ctools-use-modal ctools-modal-user-modal-style<?php if ($form_id == 'user_login') print ' active'; ?>">
      <?php print t('Login'); ?>
      <span class="icon icon-enter"></span>
    </a>
  </div>
  
  <div class="link register-link">
    <a href="<?php print url('modal/nojs/user/register'); ?>" data-toggle="tooltip" 
    data-placement="bottom" title="<?php print t('Register'); ?>" 
    class="ctools-use-modal ctools-modal-user-modal-style<?php if ($form_id == 'user_register_form') print ' active'; ?>">
      <?php print t('Register'); ?>
      <span class="icon icon-plus"></span>
    </a>
  </div>
  
  <div class="link password-link">
    <a href="<?php print url('modal/nojs/user/password'); ?>" data-toggle="tooltip" 
    data-placement="bottom" title="<?php print t('Password recovery'); ?>" 
    class="ctools-use-modal ctools-modal-user-modal-style<?php if ($form_id == 'user_pass') print ' active'; ?>">
      <?php print t('Password'); ?>
      <span class="icon icon-unlocked"></span>
    </a>
  </div>
</div>
