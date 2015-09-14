<?php
/**
 * @file
 * bc_menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bc_menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_clientes:http://google.com/
  $menu_links['main-menu_clientes:http://google.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Clientes',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'icon icon-bubbles2',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_clientes:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_comprar:http://google.com/
  $menu_links['main-menu_comprar:http://google.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Comprar',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'icon icon-star-full',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_comprar:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contato:http://google.com/
  $menu_links['main-menu_contato:http://google.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Contato',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'icon icon-phone',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contato:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_galeria:http://google.com/
  $menu_links['main-menu_galeria:http://google.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Galeria',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'icon icon-images',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_galeria:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'icon icon-home3',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_orders:http://www.google.com/
  $menu_links['menu-administration_orders:http://www.google.com/'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'http://www.google.com/',
    'router_path' => '',
    'link_title' => 'Orders',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration_orders:http://www.google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_reviews:http://google.com/
  $menu_links['menu-administration_reviews:http://google.com/'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Reviews',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration_reviews:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-administration_shipping:http://google.com/
  $menu_links['menu-administration_shipping:http://google.com/'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Shipping',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-administration_shipping:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-balas-de-coco_como-conservar:http://google.com/
  $menu_links['menu-balas-de-coco_como-conservar:http://google.com/'] = array(
    'menu_name' => 'menu-balas-de-coco',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Como Conservar',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-balas-de-coco_como-conservar:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-balas-de-coco_embalagens:http://google.com/
  $menu_links['menu-balas-de-coco_embalagens:http://google.com/'] = array(
    'menu_name' => 'menu-balas-de-coco',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Embalagens',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-balas-de-coco_embalagens:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-balas-de-coco_lista-de-balas:http://google.com/
  $menu_links['menu-balas-de-coco_lista-de-balas:http://google.com/'] = array(
    'menu_name' => 'menu-balas-de-coco',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Lista de Balas',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-balas-de-coco_lista-de-balas:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-balas-de-coco_sobre-as-balas:http://google.com/
  $menu_links['menu-balas-de-coco_sobre-as-balas:http://google.com/'] = array(
    'menu_name' => 'menu-balas-de-coco',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Sobre as Balas',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-balas-de-coco_sobre-as-balas:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-balas-de-coco_videos:http://google.com/
  $menu_links['menu-balas-de-coco_videos:http://google.com/'] = array(
    'menu_name' => 'menu-balas-de-coco',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-balas-de-coco_videos:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-empresa_como-comprar:http://google.com/
  $menu_links['menu-empresa_como-comprar:http://google.com/'] = array(
    'menu_name' => 'menu-empresa',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Como Comprar',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-empresa_como-comprar:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-empresa_nossos-clientes:http://google.com/
  $menu_links['menu-empresa_nossos-clientes:http://google.com/'] = array(
    'menu_name' => 'menu-empresa',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Nossos Clientes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-empresa_nossos-clientes:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-empresa_parceiros:http://google.com/
  $menu_links['menu-empresa_parceiros:http://google.com/'] = array(
    'menu_name' => 'menu-empresa',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Parceiros',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-empresa_parceiros:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-empresa_revendedor:http://google.com/
  $menu_links['menu-empresa_revendedor:http://google.com/'] = array(
    'menu_name' => 'menu-empresa',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Revendedor',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-empresa_revendedor:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-empresa_sobre-ns:http://google.com/
  $menu_links['menu-empresa_sobre-ns:http://google.com/'] = array(
    'menu_name' => 'menu-empresa',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Sobre Nós',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-empresa_sobre-ns:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_contato:http://google.com/
  $menu_links['menu-quick-links_contato:http://google.com/'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Contato',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-quick-links_contato:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_faq:http://google.com/
  $menu_links['menu-quick-links_faq:http://google.com/'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-quick-links_faq:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_quem-somos:http://google.com/
  $menu_links['menu-quick-links_quem-somos:http://google.com/'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Quem Somos',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-quick-links_quem-somos:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-suporte_contato:http://google.com/
  $menu_links['menu-suporte_contato:http://google.com/'] = array(
    'menu_name' => 'menu-suporte',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Contato',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-suporte_contato:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-suporte_perguntas-frequentes:http://google.com/
  $menu_links['menu-suporte_perguntas-frequentes:http://google.com/'] = array(
    'menu_name' => 'menu-suporte',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Perguntas Frequentes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-suporte_perguntas-frequentes:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-suporte_polticas-de-privacidade:http://google.com/
  $menu_links['menu-suporte_polticas-de-privacidade:http://google.com/'] = array(
    'menu_name' => 'menu-suporte',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Políticas de Privacidade',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-suporte_polticas-de-privacidade:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-suporte_suporte:http://google.com/
  $menu_links['menu-suporte_suporte:http://google.com/'] = array(
    'menu_name' => 'menu-suporte',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Suporte',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-suporte_suporte:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-suporte_termos-e-condies:http://google.com/
  $menu_links['menu-suporte_termos-e-condies:http://google.com/'] = array(
    'menu_name' => 'menu-suporte',
    'link_path' => 'http://google.com/',
    'router_path' => '',
    'link_title' => 'Termos e Condições',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-suporte_termos-e-condies:http://google.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_login:user/login',
      'attributes' => array(
        'name' => 'Log to the site to post messages, reviews and buy products.',
      ),
      'item_attributes' => array(
        'id' => 'icon icon-login15',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_minha-conta:user
  $menu_links['user-menu_minha-conta:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Minha Conta',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_minha-conta:user',
      'attributes' => array(
        'name' => 'See and alter you account information.',
      ),
      'item_attributes' => array(
        'id' => 'icon icon-profile',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_registrar:user/register
  $menu_links['user-menu_registrar:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Registrar',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_registrar:user/register',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'icon icon-plus',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_sair:user/logout
  $menu_links['user-menu_sair:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Sair',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_sair:user/logout',
      'attributes' => array(
        'name' => 'Log off the site. See you next time!',
      ),
      'item_attributes' => array(
        'id' => 'icon icon-cross',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Clientes');
  t('Como Comprar');
  t('Como Conservar');
  t('Comprar');
  t('Contato');
  t('Embalagens');
  t('FAQ');
  t('Galeria');
  t('Home');
  t('Lista de Balas');
  t('Login');
  t('Minha Conta');
  t('Nossos Clientes');
  t('Orders');
  t('Parceiros');
  t('Perguntas Frequentes');
  t('Políticas de Privacidade');
  t('Quem Somos');
  t('Registrar');
  t('Revendedor');
  t('Reviews');
  t('Sair');
  t('Shipping');
  t('Sobre Nós');
  t('Sobre as Balas');
  t('Suporte');
  t('Termos e Condições');
  t('Videos');

  return $menu_links;
}
