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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	ptr = calloc(size,  nmemb);
	return (ptr);
}
