<?php
/**
 * @file
 * fish_vocab_condition.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function fish_vocab_condition_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'poor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0c375e8a-9583-40e3-b1a8-a524685bd588',
    'vocabulary_machine_name' => 'condition',
    'field_value' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Excellent',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '546cf4b6-7bbd-4e8c-a3b5-26382e0862b8',
    'vocabulary_machine_name' => 'condition',
    'field_value' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'fair',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '64259639-f1d2-4cab-b6a6-cbaa43435527',
    'vocabulary_machine_name' => 'condition',
    'field_value' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Good',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '67787f4a-9df0-4a34-b4b5-23373e948290',
    'vocabulary_machine_name' => 'condition',
    'field_value' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'spawning',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bc38376b-5cd5-4aec-a150-fbfca018e80a',
    'vocabulary_machine_name' => 'condition',
    'field_value' => array(
      'und' => array(
        0 => array(
          'value' => 5,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'well',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c2ff98b7-eec8-46ae-9bb6-99a591be0856',
    'vocabulary_machine_name' => 'condition',
    'field_value' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'url_alias' => array(),
  );
  return $terms;
}
