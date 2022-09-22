#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - entry point
 * @n: an int
 * @dest: a char
 * @src: a char
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[n] != '\0'; i++)
	{
		dest[n] = src[n];
	}
	for (; i < n; i++)
		dest[n] = '\0';
	return (dest);
}
