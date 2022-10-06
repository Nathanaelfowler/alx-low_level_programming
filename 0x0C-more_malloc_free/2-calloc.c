#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - entry point
 * @nmemb: an unsigned int
 * @size: an unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
