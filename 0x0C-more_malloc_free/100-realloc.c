#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - entry point
 * @ptr: previous void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (new_size  == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		free(ptr);
		return (ptr1);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		return (ptr1);
	}
	free(ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
