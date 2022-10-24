#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @**head - a pointer to the first node
 * @n: a const int
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (*head);
}
