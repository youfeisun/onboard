<?php
/**
 * @file
 * jdt_user_notes_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jdt_user_notes_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer jdt user notes'.
  $permissions['administer jdt user notes'] = array(
    'name' => 'administer jdt user notes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'jdt_user_notes',
  );

  // Exported permission: 'editor jdt user notes'.
  $permissions['editor jdt user notes'] = array(
    'name' => 'editor jdt user notes',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'jdt_user_notes',
  );

  return $permissions;
}
