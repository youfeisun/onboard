<?php

/**
 * @file
 * Include this API for jdt_user_notes CURD.
 */

/**
 * Create a record.
 */
function jdt_user_notes_create_note($uid, $nid, $title, $text) {
  $record = array(
    'article_nid' => $nid,
    'author_uid' => $uid,
    'note_title' => $title,
    'note_text' => $text,
  );
  drupal_write_record('jdt_user_notes_table', $record);
  return $record['note_id'];
}

/**
 * Update the record indexed by note_id.
 */
function jdt_user_notes_update_note($note_id, $uid, $nid, $title, $text) {
  $record = array(
    'note_id' => $note_id,
    'article_nid' => $nid,
    'author_uid' => $uid,
    'note_title' => $title,
    'note_text' => $text,
  );
  drupal_write_record('jdt_user_notes_table', $record, 'note_id');
}

/**
 * Retrive a record by note_id.
 *
 * @param int $note_id
 *   The node ID where the notes belongs to.
 *
 * @return Object $record
 *   The returned record.
 */
function jdt_user_notes_read_note($note_id) {
  $record = db_select('jdt_user_notes_table', 't')
    ->fields('t')
    ->condition('note_id', $note_id)
    ->execute()
    ->fetch();
  return $record;
}

/**
 * Delete a record by note_id.
 *
 * @param int $note_id
 *   The id of note to be removed.
 */
function jdt_user_notes_delete_note($note_id) {
  db_delete('jdt_user_notes_table')
    ->condition('note_id', $note_id)
    ->execute();
}

/**
 * Retrive an array of records by nid.
 *
 * @param int $nid
 *   The node ID where the notes belongs to.
 *
 * @return array $record
 *   The returned record having the same nid, indexed by note_id.
 */
function jdt_user_notes_get_note_by_nid($nid) {
  $record = db_select('jdt_user_notes_table', 't')
    ->fields('t')
    ->condition('article_nid', $nid)
    ->execute()
    ->fetchAllAssoc('note_id');
  return $record;
}


