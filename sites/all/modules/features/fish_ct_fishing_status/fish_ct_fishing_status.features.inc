<?php
/**
 * @file
 * fish_ct_fishing_status.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fish_ct_fishing_status_node_info() {
  $items = array(
    'fishing_status' => array(
      'name' => t('Fishing Status'),
      'base' => 'node_content',
      'description' => t('Report of [Fish] at [Lake] is [Condition] on [Date]'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
