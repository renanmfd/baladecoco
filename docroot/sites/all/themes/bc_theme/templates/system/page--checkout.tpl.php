<?php

/**
 * @file
 * Custom template to display checkout pages on baladecoco.com.
 */
?>

<div id="page">

  <?php #-- HEADER --# ?>
  <header id="header">

    <?php #-- Topbar --# ?>
    <section id="topbar">
      <h3 class="hidden"><?php print t('Topbar'); ?></h3>
      <?php print render($page['topbar']);?>
    </section>

    <?php #-- Management --# ?>
    <?php if ($is_admin or $is_moderator): ?>
      <section id="management">
        <h3 class="hidden"><?php print t('Management'); ?></h3>
        <?php print render($page['management']);?>
      </section>
    <?php endif; ?>

  </header>
  <?php #-- END HEADER --# ?>

  <?php #-- MAIN CONTENT --# ?>
  <div id="main-content">
    
    <?php #-- Messages --# ?>
    <?php if (!empty($messages)): ?>
      <section id="messages">
        <?php print $messages; ?>
      </section>
    <?php endif; ?>

    <?php #-- Tabs --# ?>
    <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>

    <?php #-- Help --# ?>
    <?php if (!empty($page['help'])): ?>
      <?php print render($page['help']); ?>
    <?php endif; ?>

    <?php #-- Content --# ?>
    <?php print render($page['content']); ?>

  </div>
  <?php #-- END MAIN CONTENT --# ?>


  <?php #-- FOOTER --# ?>
  <footer id="footer-wrapper">

    <?php #-- Bottom --# ?>
    <section id="bottom">
      <h3 class="hidden"><?php print t('Bottom'); ?></h3>
      <?php print render($page['bottom']);?>
    </section>

  </footer>
  <?php #-- END FOOTER --# ?>

</div>
