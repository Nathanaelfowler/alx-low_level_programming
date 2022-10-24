#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list
 * @head: a ptr to the list
 * Return: the head node’s data, n.
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int n;

	if (head == NULL|| *head == NULL)
		return (0);
	
	newnode = *head;
	*head = newnode->next;
	n = newnode->n;
	free(newnode);

	return (n);
}
