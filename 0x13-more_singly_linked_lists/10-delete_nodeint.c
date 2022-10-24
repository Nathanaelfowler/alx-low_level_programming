#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - unction that deletes the node at index index
 * of a listint_t linked list.
 * @head: a pointer of the list
 * @index: the index of the node that should be deleted
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delnode;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		delnode = (*head)->next;
		free(*head);
		*head = delnode;
		return (1);
	}
	temp = *head;

	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next; /*traversing thru thr list*/
		i++;
	}
	delnode = temp->next;
	temp->next = delnode->next;
	free(delnode);

	return (1);
}
