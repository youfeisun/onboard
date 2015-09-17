<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
This is overriden.

<div class='note-wrapper'>
  <?php
  ctools_include('modal');
  ctools_modal_add_js();
  foreach ($records as $entry){
    $user = user_load($entry->author_uid);
    print "<div class='note-container'>";
    print "<div class='note-text'>" . $entry->note_text . "</div>";
    print "<div class='note-title'>" . $entry->note_title . "</div>";
    print "<div class='note-author'>" . $user->name . "</div>";
    print "<div class='note-edit-link'><a class='ctools-use-modal' href='/note/" . $entry->note_id . "/nojs/edit'>Edit</a></div>";
    print "</div>";
  }

  ?>
</div>
