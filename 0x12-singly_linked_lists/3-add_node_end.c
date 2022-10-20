#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: a pointer
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new, *last;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
