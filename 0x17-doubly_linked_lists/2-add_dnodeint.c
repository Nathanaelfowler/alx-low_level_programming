#include "lists.h"

/**
 * *add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: a pointer
 * @n: an int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *temp_node = NULL;

	newnode =  malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	temp_node = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->next = temp_node;
		*head = newnode;
	}
	if (temp_node != NULL)
		temp_node->prev = *head;
	return (*head);
}
