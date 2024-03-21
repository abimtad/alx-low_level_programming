#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to the head of the linked list.
 * @idx: the index at which the node is going to be added.
 * @n: teh value of teh inserted node.
 * Return: the address of the new_node node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_node = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp_node = tmp_node->next;
		if (tmp_node == NULL)
			return (NULL);
	}

	if (tmp_node->next == NULL)
		return (add_dnodeint_end(h, n));


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp_node;
	new_node->next = tmp_node->next;
	tmp_node->next->prev = new_node;
	tmp_node->next = new_node;

	return (new_node);
}
