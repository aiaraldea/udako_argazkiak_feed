<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function udako_argazkiak_feed_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'udako_postal_lehiaketa';
  $feeds_importer->config = array(
    'name' => 'Udako postal lehiaketa',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsDataProcessor',
      'config' => array(
        'update_existing' => 1,
        'expire' => '7257600',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'description',
            'unique' => 0,
          ),
          3 => array(
            'source' => 'timestamp',
            'target' => 'timestamp',
            'unique' => 0,
          ),
        ),
        'delete_with_source' => 0,
      ),
    ),
    'content_type' => 'udako_argazkiak_feed',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 0,
  );
  $export['udako_postal_lehiaketa'] = $feeds_importer;

  return $export;
}
