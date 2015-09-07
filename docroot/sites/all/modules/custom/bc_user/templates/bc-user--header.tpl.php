<div class="<?php print $classes; ?>">
  <div class="link login-link">
    <a href="<?php print url('user/login'); ?>" title="Login"<?php if ($url == 'user/login') print ' class="active"'; ?>>
      <?php print t('Login'); ?>
      <span class="icon icon-enter"></span>
    </a>
  </div>
  
  <div class="link register-link">
    <a href="<?php print url('user/register'); ?>" title="Register"<?php if ($url == 'user/register') print ' class="active"'; ?>>
      <?php print t('Register'); ?>
      <span class="icon icon-plus"></span>
    </a>
  </div>
  
  <div class="link password-link">
    <a href="<?php print url('user/password'); ?>" title="Password"<?php if ($url == 'user/password') print ' class="active"'; ?>>
      <?php print t('Password'); ?>
      <span class="icon icon-unlocked"></span>
    </a>
  </div>
</div>
