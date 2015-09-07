<?php print $form_header; ?>
<div class="<?php print $classes; ?>">
  <h2 class="user-login-header"><?php print render($intro_text); ?></h2>
  <?php print drupal_render_children($form) ?>
</div>
<ul class="user-form-bottom">
  <li><a href="<?php print url('user/password'); ?>"><?php print t('I forgot my password'); ?></a></li>
</ul>
