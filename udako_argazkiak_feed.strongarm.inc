<?php

/**
 * Implementation of hook_strongarm().
 */
function udako_argazkiak_feed_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_udako_argazkiak_feed';
  $strongarm->value = '0';
  $export['comment_anonymous_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_udako_argazkiak_feed';
  $strongarm->value = '3';
  $export['comment_controls_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_udako_argazkiak_feed';
  $strongarm->value = '4';
  $export['comment_default_mode_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_udako_argazkiak_feed';
  $strongarm->value = '1';
  $export['comment_default_order_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_udako_argazkiak_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_udako_argazkiak_feed';
  $strongarm->value = '0';
  $export['comment_form_location_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_udako_argazkiak_feed';
  $strongarm->value = '1';
  $export['comment_preview_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_udako_argazkiak_feed';
  $strongarm->value = '1';
  $export['comment_subject_field_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_udako_argazkiak_feed';
  $strongarm->value = '0';
  $export['comment_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_udako_argazkiak_feed';
  $strongarm->value = '0';
  $export['language_content_type_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_udako_argazkiak_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_udako_argazkiak_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_node_type_priority_udako_argazkiak_feed';
  $strongarm->value = '-1';
  $export['xmlsitemap_node_type_priority_udako_argazkiak_feed'] = $strongarm;

  return $export;
}
