<?php
/**
 * @file
 * jdt_view_notes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jdt_view_notes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_notes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'jdt_user_notes_table';
  $view->human_name = 'View notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View notes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: JDT User Notes: Title shown when adding the relationship */
  $handler->display->display_options['relationships']['author_uid']['id'] = 'author_uid';
  $handler->display->display_options['relationships']['author_uid']['table'] = 'jdt_user_notes_table';
  $handler->display->display_options['relationships']['author_uid']['field'] = 'author_uid';
  /* Relationship: JDT User Notes: Title shown when adding the relationship */
  $handler->display->display_options['relationships']['article_nid']['id'] = 'article_nid';
  $handler->display->display_options['relationships']['article_nid']['table'] = 'jdt_user_notes_table';
  $handler->display->display_options['relationships']['article_nid']['field'] = 'article_nid';
  /* Field: JDT User Notes: Note ID */
  $handler->display->display_options['fields']['note_id']['id'] = 'note_id';
  $handler->display->display_options['fields']['note_id']['table'] = 'jdt_user_notes_table';
  $handler->display->display_options['fields']['note_id']['field'] = 'note_id';
  /* Field: JDT User Notes: Title text field */
  $handler->display->display_options['fields']['note_title']['id'] = 'note_title';
  $handler->display->display_options['fields']['note_title']['table'] = 'jdt_user_notes_table';
  $handler->display->display_options['fields']['note_title']['field'] = 'note_title';
  /* Field: JDT User Notes: Note text field */
  $handler->display->display_options['fields']['note_text']['id'] = 'note_text';
  $handler->display->display_options['fields']['note_text']['table'] = 'jdt_user_notes_table';
  $handler->display->display_options['fields']['note_text']['field'] = 'note_text';
  /* Field: JDT User Notes: User ID */
  $handler->display->display_options['fields']['author_uid']['id'] = 'author_uid';
  $handler->display->display_options['fields']['author_uid']['table'] = 'jdt_user_notes_table';
  $handler->display->display_options['fields']['author_uid']['field'] = 'author_uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'article_nid';
  $handler->display->display_options['fields']['title']['label'] = 'Title of the article';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'author_uid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-notes';
  $export['view_notes'] = $view;

  return $export;
}
