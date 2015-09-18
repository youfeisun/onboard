<?php
function jdt_user_notes_views_data(){
  $data = array(
    'jdt_user_notes_table' => array(
      'table' => array(
        'group' => t('JDT User Notes'),
        'base' => array(
          'field' => 'note_id',
          'title' => t('Notes'),
          'help' => t('The notes to display. Remark: watch where it will be shown'),
          'weight' => -10,
          ),
        ),
      'note_id' => array(
        'title' => t('Note ID'),
        'help' => t('ID of the Note'),
        'field' => array(
          'handler' => 'views_handler_field_node',
          'click sortable' => TRUE,
          ),
        'argument' => array(
          'handler' => 'views_handler_argument_node_nid',
          'name field' => 'note_title',
          'numeric' => TRUE,
          'validate type' => 'note_id',
          ),

        'filter' => array(
          'handler' => 'views_handler_filter_numeric',
          ),

        'sort' => array(
          'handler' => 'views_handler_sort',
          ),
        ),
      ),
    );
  $data['jdt_user_notes_table']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'article_nid',
      ),
    'users' => array(
      'left_field' => 'uid',
      'field' => 'author_uid'
      ),

    );
  $data['jdt_user_notes_table']['article_nid'] = array(
    'title' => t('Article ID'),
    'help' => t('ID of the Article'),
    'field' => array(
      'handler' => 'views_handler_field_node',
      'click sortable' => TRUE,
      ),
    'argument' => array(
      'handler' => 'views_handler_argument_node_nid',
      'name field' => 'note_title',
      'numeric' => TRUE,
      'validate type' => 'note_id',
      ),

    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
      ),

    'sort' => array(
      'handler' => 'views_handler_sort',
      ),

    'relationship' => array(
      'base' => 'node', // The name of the table to join with.
      'base field' => 'nid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('Default label for the relationship'),
      'title' => t('Title shown when adding the relationship'),
      'help' => t('More information on this relationship'),
      ),
    );
$data['jdt_user_notes_table']['author_uid'] = array(
  'title' => t('User ID'),
  'help' => t('ID of the User'),
  'field' => array(
    'handler' => 'views_handler_field_node',
    'click sortable' => TRUE,
    ),
  'argument' => array(
    'handler' => 'views_handler_argument_node_nid',
    'name field' => 'note_title',
    'numeric' => TRUE,
    'validate type' => 'note_id',
    ),

  'filter' => array(
    'handler' => 'views_handler_filter_numeric',
    ),

  'sort' => array(
    'handler' => 'views_handler_sort',
    ),

  'relationship' => array(
      'base' => 'users', // The name of the table to join with.
      'base field' => 'uid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('Default label for the relationship'),
      'title' => t('Title shown when adding the relationship'),
      'help' => t('More information on this relationship'),
      ),
  );
$data['jdt_user_notes_table']['note_title'] = array(
  'title' => t('Title text field'),
  'help' => t('Just a plain text field.'),
  'field' => array(
    'handler' => 'views_handler_field',
        'click sortable' => TRUE, // This is use by the table display plugin.
        ),
  'sort' => array(
    'handler' => 'views_handler_sort',
    ),
  'filter' => array(
    'handler' => 'views_handler_filter_string',
    ),
  'argument' => array(
    'handler' => 'views_handler_argument_string',
    ),
  );
$data['jdt_user_notes_table']['note_text'] = array(
    'title' => t('Note text field'),
  'help' => t('Just another plain text field.'),
  'field' => array(
    'handler' => 'views_handler_field',
        'click sortable' => TRUE, // This is use by the table display plugin.
        ),
  'sort' => array(
    'handler' => 'views_handler_sort',
    ),
  'filter' => array(
    'handler' => 'views_handler_filter_string',
    ),
  'argument' => array(
    'handler' => 'views_handler_argument_string',
    ),
  );

return $data;
}
