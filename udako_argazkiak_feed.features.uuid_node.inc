<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function udako_argazkiak_feed_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'udako_argazkiak_feed',
    'language' => 'eu',
    'uid' => '1',
    'status' => '1',
    'created' => '1310491712',
    'changed' => '1311173388',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => '2011. urteko lehiaketa',
    'body' => '',
    'teaser' => '',
    'log' => '',
    'revision_timestamp' => '1311173388',
    'format' => '0',
    'name' => 'mairua',
    'picture' => '',
    'data' => 'a:8:{s:11:"remember_me";b:0;s:15:"l10n_client_key";s:36:"744:2ffba450fcda45be3e8c73f54a5a3076";s:13:"form_build_id";s:37:"form-e644dcde8b9000c469924c575e64d639";s:18:"admin_compact_mode";b:1;s:10:"blog_theme";s:3:"sky";s:5:"Title";s:14:"Druiden txokoa";s:11:"Description";s:35:"Aiaraldeko web garatzailearen bloga";s:6:"format";s:1:"1";}',
    'path' => 'content/2011-urteko-lehiaketa',
    'last_comment_timestamp' => '1310672928',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'radioactivity' => array(
      'energy' => array(
        '1' => 0.99401936471566,
        '2' => 6.0847521557861,
      ),
    ),
    'uuid' => '6012d7b2-acb0-11e0-b0d3-0024e8f3c06a',
    'revision_uuid' => '60130c96-acb0-11e0-b0d3-0024e8f3c06a',
    'pathauto_perform_alias' => FALSE,
    'date' => '2011-07-12 19:28:32 +0200',
  );
  return $nodes;
}
