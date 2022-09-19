#include "main.h"
#include <stdio.h>

/**
 * swap_int - entry point
 * @a: an int
 * @b: an int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
