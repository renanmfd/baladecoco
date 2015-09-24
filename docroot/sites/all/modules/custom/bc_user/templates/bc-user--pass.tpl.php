<?php print $form_header; ?>
<div class="<?php print $classes; ?>">
  <h2 class="user-login-header"><?php print render($intro_text); ?></h2>
  <?php print drupal_render_children($form) ?>
</div>
<ul class="user-form-bottom">
  <li><a href="<?php print url('modal/nojs/user/register'); ?>"><?php print t('I don\'t have an account'); ?></a></li>
</ul>
