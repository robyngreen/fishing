<?php
/**
 * @file
 * fish_vocab_condition.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fish_vocab_condition_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_value'
  $field_bases['field_value'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_value',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
