#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - entry point
 * @min: an int
 * @max: an int
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (arr = 0; min <= max; arr++)
	{
		ptr[arr] = min;
		min++;
	}
	return (ptr);
}
