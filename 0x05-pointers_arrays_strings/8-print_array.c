#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: an int
 * @n: an int
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
