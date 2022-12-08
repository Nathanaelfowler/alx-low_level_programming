#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: a pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
