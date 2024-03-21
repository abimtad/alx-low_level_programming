#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the list
 *
 * Return: nothing
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node;

	while (head)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}

}
