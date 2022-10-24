#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: a pointer to the list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: an int
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1, i = 1;
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (idx < count)
	{
		return (NULL);
	}
	else
	{
		temp = *head;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}

		newnode->n = n;
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (temp->next);
}
