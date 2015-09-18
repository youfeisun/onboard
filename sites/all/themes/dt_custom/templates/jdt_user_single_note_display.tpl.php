Single Note View

  <?php
    $user = user_load($record->author_uid);
    ctools_include('modal');
    ctools_modal_add_js();
  ?>

<div class='note-container'>
  <div class='note-text'><?php echo $record->note_text ?></div>
  <div class='note-title'><?php echo $record->note_title ?></div>
  <div class='note-author'><?php echo $user->name ?></div>
  <div class='note-edit-link'><a class='ctools-use-modal' href='/note/ <?php echo $record->note_id ?>/nojs/edit'>Edit</a></div>
</div>



