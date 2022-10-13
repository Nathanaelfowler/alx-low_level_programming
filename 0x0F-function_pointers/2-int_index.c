#include <stddef.h>
#include <stdio.h>

/**
 * int_index - entry point
 * @array: an array of int
 * @size: the size of the arr
 * @cmp: a func. pointer
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
