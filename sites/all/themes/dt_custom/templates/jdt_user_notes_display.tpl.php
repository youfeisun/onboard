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

  foreach ($display as $entry){
    print "<div class='note-container'>";
    print "<div class='note-text'>" . $entry[0] . "</div>";
    print "<div class='note-title'>" . $entry[1] . "</div>";
    print "<div class='note-author'>" . $entry[2] . "</div>";
    print "</div>";
  }


?>
</div>
