#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list.
 * @h: a double linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
