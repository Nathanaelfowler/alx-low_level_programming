#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a listint_t list.
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nonodes;

	for (nonodes = 0; h != NULL; nonodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nonodes);
}
