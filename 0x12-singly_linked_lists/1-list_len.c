#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: a list_t list
 * Return: No of elements
 */
size_t list_len(const list_t *h)
{
	size_t noele;

	for (noele = 0; h != NULL; noele++)
	{
		h = h->next;
	}
	return (noele);
}
