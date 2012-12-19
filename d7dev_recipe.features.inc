<?php
/**
 * @file
 * d7dev_recipe.features.inc
 */

/**
 * Implements hook_node_info().
 */
function d7dev_recipe_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Recipe description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
