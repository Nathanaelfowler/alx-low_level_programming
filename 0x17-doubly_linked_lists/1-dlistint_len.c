#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: a dlistint_t list.
 * Return: No. of ele
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t noele = 0;

	while (h != NULL)
	{
		h = h->next;
		noele++;
	}
	return (noele);
}
