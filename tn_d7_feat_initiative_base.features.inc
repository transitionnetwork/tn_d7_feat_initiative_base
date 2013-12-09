<?php
/**
 * @file
 * tn_d7_feat_initiative_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tn_d7_feat_initiative_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tn_d7_feat_initiative_base_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tn_d7_feat_initiative_base_node_info() {
  $items = array(
    'initiative' => array(
      'name' => t('Initiative'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
