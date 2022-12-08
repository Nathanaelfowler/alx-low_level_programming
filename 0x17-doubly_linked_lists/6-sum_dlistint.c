#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: a pointer
 * Return: an int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp)
	{
		next = temp->next;
		sum += temp->n;
		temp = next;
	}
	return (sum);
}
