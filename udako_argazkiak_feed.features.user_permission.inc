<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function udako_argazkiak_feed_user_default_permissions() {
  $permissions = array();

  // Exported permission: create udako_argazkiak_feed content
  $permissions['create udako_argazkiak_feed content'] = array(
    'name' => 'create udako_argazkiak_feed content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any udako_argazkiak_feed content
  $permissions['delete any udako_argazkiak_feed content'] = array(
    'name' => 'delete any udako_argazkiak_feed content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own udako_argazkiak_feed content
  $permissions['delete own udako_argazkiak_feed content'] = array(
    'name' => 'delete own udako_argazkiak_feed content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any udako_argazkiak_feed content
  $permissions['edit any udako_argazkiak_feed content'] = array(
    'name' => 'edit any udako_argazkiak_feed content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own udako_argazkiak_feed content
  $permissions['edit own udako_argazkiak_feed content'] = array(
    'name' => 'edit own udako_argazkiak_feed content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
