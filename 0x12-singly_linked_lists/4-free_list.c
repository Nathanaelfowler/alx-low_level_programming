#include "lists.h"
#include <stdio.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: a pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
