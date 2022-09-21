#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - entry point
 * @dest: a char
 * @src: a char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int j, i;

	for (j = 0; dest[j]; j++)
	{
		for (i = 0; src[i]; i++)
		{
			dest[j] = src[i];
		}
	}
	return (dest);
}
