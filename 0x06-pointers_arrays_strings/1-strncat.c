#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - entry point
 * @dest: a char
 * @src: a char
 * @n: an int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;

		for (index = 0; src[index] && index < n; index++)
		{
			dest[dest_len++] = src[index];
		}
	}
	return (dest);
}
