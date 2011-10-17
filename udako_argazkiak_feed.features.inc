<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function udako_argazkiak_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "data" && $api == "data_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function udako_argazkiak_feed_node_info() {
  $items = array(
    'udako_argazkiak_feed' => array(
      'name' => t('Udako Argazkiak Feed'),
      'module' => 'features',
      'description' => t('A feed where the postcards are read from.'),
      'has_title' => '1',
      'title_label' => t('Izenburua'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function udako_argazkiak_feed_views_api() {
  return array(
    'api' => '2',
  );
}
