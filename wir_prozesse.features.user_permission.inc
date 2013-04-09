<?php
/**
 * @file
 * wir_prozesse.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wir_prozesse_user_default_permissions() {
  $permissions = array();

  // Exported permission: create vereinbarung content.
  $permissions['create vereinbarung content'] = array(
    'name' => 'create vereinbarung content',
    'roles' => array(
      0 => 'Betreuer',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create vision content.
  $permissions['create vision content'] = array(
    'name' => 'create vision content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vereinbarung content.
  $permissions['delete any vereinbarung content'] = array(
    'name' => 'delete any vereinbarung content',
    'roles' => array(
      0 => 'Betreuer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vision content.
  $permissions['delete any vision content'] = array(
    'name' => 'delete any vision content',
    'roles' => array(
      0 => 'Betreuer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vereinbarung content.
  $permissions['delete own vereinbarung content'] = array(
    'name' => 'delete own vereinbarung content',
    'roles' => array(
      0 => 'Betreuer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vision content.
  $permissions['delete own vision content'] = array(
    'name' => 'delete own vision content',
    'roles' => array(
      0 => 'Betreuer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vereinbarung content.
  $permissions['edit any vereinbarung content'] = array(
    'name' => 'edit any vereinbarung content',
    'roles' => array(
      0 => 'Betreuer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vision content.
  $permissions['edit any vision content'] = array(
    'name' => 'edit any vision content',
    'roles' => array(
      0 => 'Betreuer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own vereinbarung content.
  $permissions['edit own vereinbarung content'] = array(
    'name' => 'edit own vereinbarung content',
    'roles' => array(
      0 => 'Betreuer',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own vision content.
  $permissions['edit own vision content'] = array(
    'name' => 'edit own vision content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
