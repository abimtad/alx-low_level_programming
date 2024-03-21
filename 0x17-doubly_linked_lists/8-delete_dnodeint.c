#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index
 *				of a dlistint_t linked list.
 * @head: A pointer to header
 * @index: The index of the node to delete.
 *
 * Return: succes 1, -1 otherwise.
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp_node == NULL)
			return (-1);
		tmp_node = tmp_node->next;
	}

	if (tmp_node == *head)
	{
		*head = tmp_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp_node->prev->next = tmp_node->next;
		if (tmp_node->next != NULL)
			tmp_node->next->prev = tmp_node->prev;
	}

	free(tmp_node);
	return (1);
}
