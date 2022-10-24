#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: a listint_t list.
 * Return: no. of ele
 */
size_t listint_len(const listint_t *h)
{
	size_t noele;

	for (noele = 0; h != NULL; noele++)
	{
		h = h->next;
	}
	return (noele);
}
