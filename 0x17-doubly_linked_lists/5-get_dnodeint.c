#include "lists.h"

/**
 * *get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: a ptr
 * @index: the index of the node, starting from 0
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	for (count = 0; temp != NULL; count++)
	{
		if (count == index)
		{
			break;
		}
		temp = temp->next;
	}
	return (temp);
}
