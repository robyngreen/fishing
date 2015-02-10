<?php
/**
 * @file
 * fish_ct_individual_report.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fish_ct_individual_report_node_info() {
  $items = array(
    'individual_report' => array(
      'name' => t('Individual Report'),
      'base' => 'node_content',
      'description' => t('Raw text of original reports per lake.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
