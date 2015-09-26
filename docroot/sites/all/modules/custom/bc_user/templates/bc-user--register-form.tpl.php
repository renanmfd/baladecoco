<?php print $form_header; ?>
<div class="<?php print $classes; ?>">
  <h2 class="user-login-header"><?php print render($intro_text); ?></h2>
  <?php print drupal_render_children($form) ?>
</div>
<ul class="user-form-bottom">
  <li><a href="<?php print url('modal/nojs/user/login'); ?>"><?php print t('I have an account already'); ?></a></li>
</ul>
