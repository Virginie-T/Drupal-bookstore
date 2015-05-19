<?php
/**
 * @file
 * reviewer.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function reviewer_user_default_roles() {
  $roles = array();

  // Exported role: Reviewer.
  $roles['Reviewer'] = array(
    'name' => 'Reviewer',
    'weight' => 3,
  );

  return $roles;
}
