<?php print $form_header; ?>
<div class="<?php print $classes; ?>">
  <h2 class="user-login-header"><?php print render($intro_text); ?></h2>
  <?php print drupal_render_children($form) ?>
</div>
<ul class="user-form-bottom">
  <li><a href="<?php print url('modal/nojs/user/password'); ?>" 
         class="ctools-use-modal ctools-modal-user-modal-style">
    <?php print t('I forgot my password'); ?></a>
  </li>
  <li><a href="<?php print url('modal/nojs/user/register'); ?>" 
         class="ctools-use-modal ctools-modal-user-modal-style">
    <?php print t('I don\'t have an account'); ?></a>
  </li>
</ul>
