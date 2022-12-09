#include "lists.h"

/**
 * *insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: a ptr
 * @idx: index of the list
 * @n: an int
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *temp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	while (temp->next != NULL)
	{
		if (count == idx)
		{
			new->prev = temp;
			new->next = temp->next;
			temp->next = new;
			new->next->prev = new;
		}
		temp = temp->next;
		count++;
	}
	if (count == idx)
	{
		add_dnodeint_end(h, n);
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
