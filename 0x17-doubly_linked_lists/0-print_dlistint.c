#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list.
 * @h: a double linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->n != 0)
		{
			printf("%d\n", h->n);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
