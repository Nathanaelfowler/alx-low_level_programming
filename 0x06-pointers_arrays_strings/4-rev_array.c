#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - entry point
 * @a: an int
 * @n: an int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
