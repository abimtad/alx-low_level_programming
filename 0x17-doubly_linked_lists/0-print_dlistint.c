#include "lists.h"

/**
 * print_dlistint - prints all the elemets of a dlistint_t.
 * @h: pointer to the head of list
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
