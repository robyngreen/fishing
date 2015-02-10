<?php
/**
 * @file
 * fish_ct_weekly_report.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fish_ct_weekly_report_node_info() {
  $items = array(
    'weekly_report' => array(
      'name' => t('Weekly Report'),
      'base' => 'node_content',
      'description' => t('Raw text of the original week\'s report.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
