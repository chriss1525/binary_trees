#include "binary_trees.h"
/**
 * binary_tree_node - creates new node
 * @parent: parent to the node
 * @value: value of the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    node->n = value;
    node->parent = parent;

    return (node);
}
