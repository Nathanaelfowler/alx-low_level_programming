#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *create_array - entry point
 * @size: an unsigned int
 * @c: a char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
