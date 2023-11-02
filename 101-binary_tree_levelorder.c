#include "binary_trees.h"

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
levelorder_queue_t *create_queue_node(binary_tree_t *node);
void push_to_queue(binary_tree_t *node, levelorder_queue_t **head, levelorder_queue_t **tail, void (*func)(int));
void free_queue(levelorder_queue_t *head);
void dequeue(levelorder_queue_t **head);

/**
 * binary_tree_levelorder - Performs level-order traversal of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    levelorder_queue_t *head, *tail;

    if (tree == NULL || func == NULL)
        return;

    head = tail = create_queue_node((binary_tree_t *)tree);

    if (head == NULL)
        return;

    while (head != NULL)
    {
        push_to_queue(head->node, &head, &tail, func);
        dequeue(&head);
    }
}

/**
 * create_queue_node - Creates a new node for the level-order queue.
 *
 * @node: The binary tree node to store in the queue node.
 *
 * Return: A pointer to the new queue node, or NULL if an error occurs.
 */
levelorder_queue_t *create_queue_node(binary_tree_t *node)
{
    levelorder_queue_t *new_node = malloc(sizeof(levelorder_queue_t);

    if (new_node == NULL)
        return NULL;

    new_node->node = node;
    new_node->next = NULL;

    return new_node;
}

/**
 * push_to_queue - Calls a function on a binary tree node and adds its children to the level-order queue.
 *
 * @node: The binary tree node to process and add to the queue.
 * @head: A double pointer to the head of the queue.
 * @tail: A double pointer to the tail of the queue.
 * @func: A pointer to the function to call on the node.
 */
void push_to_queue(binary_tree_t *node, levelorder_queue_t **head, levelorder_queue_t **tail, void (*func)(int))
{
    levelorder_queue_t *new_node;

    func(node->n);

    if (node->left != NULL)
    {
        new_node = create_queue_node(node->left);

        if (new_node == NULL)
        {
            free_queue(*head);
            exit(1);
        }

        (*tail)->next = new_node;
        *tail = new_node;
    }

    if (node->right != NULL)
    {
        new_node = create_queue_node(node->right);

        if (new_node == NULL)
        {
            free_queue(*head);
            exit(1);
        }

        (*tail)->next = new_node;
        *tail = new_node;
    }
}

/**
 * free_queue - Frees the memory allocated for a level-order queue.
 *
 * @head: A pointer to the head of the queue.
 */
void free_queue(levelorder_queue_t *head)
{
    levelorder_queue_t *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

/**
 * dequeue - Removes the head of the level-order queue.
 *
 * @head: A double pointer to the head of the queue.
 */
void dequeue(levelorder_queue_t **head)
{
    levelorder_queue_t *tmp = (*head)->next;
    free(*head);
    *head = tmp;
}
