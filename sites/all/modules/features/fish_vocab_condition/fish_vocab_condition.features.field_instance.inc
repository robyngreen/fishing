<?php
/**
 * @file
 * fish_vocab_condition.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fish_vocab_condition_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-condition-field_value'
  $field_instances['taxonomy_term-condition-field_value'] = array(
    'bundle' => 'condition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_value',
    'label' => 'Value',
    'required' => 0,
    'settings' => array(
      'max' => 5,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Value');

  return $field_instances;
}
