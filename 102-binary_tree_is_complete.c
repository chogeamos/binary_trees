#include "binary_trees.h"

<<<<<<< HEAD
=======
int binary_tree_is_complete(const binary_tree_t *tree);
levelorder_queue_t *create_node(binary_tree_t *node);
void free_queue(levelorder_queue_t *head);
void push(binary_tree_t *node, levelorder_queue_t *head,
		levelorder_queue_t **tail);
void pop(levelorder_queue_t **head);

>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
<<<<<<< HEAD
 * Return: 0 if the tree is NULL or not complete, 1 if it's complete.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    levelorder_queue_t *head, *tail;
    unsigned char flag = 0;

    if (tree == NULL)
        return (0);

    head = tail = create_queue_node((binary_tree_t *)tree);

    if (head == NULL)
        exit(1);

    while (head != NULL)
    {
        if (head->node->left != NULL)
        {
            if (flag == 1)
            {
                free_queue(head);
                return (0);
            }
            push(head->node->left, &head, &tail);
        }
        else
            flag = 1;

        if (head->node->right != NULL)
        {
            if (flag == 1)
            {
                free_queue(head);
                return (0);
            }
            push(head->node->right, &head, &tail);
        }
        else
            flag = 1;

        dequeue(&head);
    }

    return (1);
}

/**
 * create_queue_node - Creates a new node for the level-order queue.
 *
 * @node: The binary tree node for the new node to contain.
 *
 * Return: A pointer to the new queue node, or NULL if an error occurs.
 */
levelorder_queue_t *create_queue_node(binary_tree_t *node)
{
    levelorder_queue_t *new_node = malloc(sizeof(levelorder_queue_t));

    if (new_node == NULL)
        return NULL;

    new_node->node = node;
    new_node->next = NULL;

    return new_node;
}

/**
 * free_queue - Frees the memory allocated for a level-order queue.
=======
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{

	levelorder_queue_t *head, *tail;
	unsigned char flag = 0;

	if (tree == NULL)
		return (0);

	head = tail = create_node((binary_tree_t *)tree);
	if (head == NULL)
		exit(1);

	while (head != NULL)
	{
		if (head->node->left != NULL)
		{
			if (flag == 1)
			{
				free_queue(head);
				return (0);
			}
			push(head->node->left, head, &tail);
		}
		else
			flag = 1;
		if (head->node->right != NULL)
		{
			if (flag == 1)
			{
				free_queue(head);
				return (0);
			}
			push(head->node->right, head, &tail);
		}
		else
			flag = 1;
		pop(&head);
	}
	return (1);
}

/**
 * create_node - Creates a new levelorder_queue_t node.
 *
 * @node: The binary tree node for the new node to contain.
 *
 * Return: If an error occurs, NULL.
 *         Otherwise, a pointer to the new node.
 */
levelorder_queue_t *create_node(binary_tree_t *node)
{
	levelorder_queue_t *new;

	new = malloc(sizeof(levelorder_queue_t));
	if (new == NULL)
		return (NULL);

	new->node = node;
	new->next = NULL;

	return (new);
}

/**
 * free_queue - Frees a levelorder_queue_t queue.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 *
 * @head: A pointer to the head of the queue.
 */
void free_queue(levelorder_queue_t *head)
{
<<<<<<< HEAD
    levelorder_queue_t *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

/**
 * push - Pushes a node to the back of a level-order queue.
 *
 * @node: The binary tree node to enqueue.
 * @head: A double pointer to the head of the queue.
 * @tail: A double pointer to the tail of the queue.
 *
 * Description: Exits with a status code of 1 upon malloc failure.
 */
void push(binary_tree_t *node, levelorder_queue_t *head, levelorder_queue_t **tail)
{
    levelorder_queue_t *new_node = create_queue_node(node);

    if (new_node == NULL)
    {
        free_queue(head);
        exit(1);
    }

    (*tail)->next = new_node;
    *tail = new_node;
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
=======
	levelorder_queue_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/**
 * push - Pushes a node to the back of a levelorder_queue_t queue.
 *
 * @node: The binary tree node to print and push.
 * @head: A double pointer to the head of the queue.
 * @tail: A double pointer to the tail of the queue.
 *
 * Description: Upon malloc failure, exits with a status code of 1.
 */
void push(binary_tree_t *node, levelorder_queue_t *head,
		levelorder_queue_t **tail)
{
	levelorder_queue_t *new;

	new = create_node(node);
	if (new == NULL)
	{
		free_queue(head);
		exit(1);
	}
	(*tail)->next = new;
	*tail = new;
}

/**
 * pop - Pops the head of a levelorder_queue_t queue.
 *
 * @head: A double pointer to the head of the queue.
 */
void pop(levelorder_queue_t **head)
{
	levelorder_queue_t *tmp;

	tmp = (*head)->next;
	free(*head);
	*head = tmp;
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
