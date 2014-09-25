<?php
/**
 * @file
 * fish_vocab_lake.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fish_vocab_lake_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-lake-field_location'
  $field_instances['taxonomy_term-lake-field_location'] = array(
    'bundle' => 'lake',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
      ),
      'type' => 'geofield_latlon',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Location');

  return $field_instances;
}
