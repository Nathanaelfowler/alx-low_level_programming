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
	char *p = dest;
	int count = 0;

	while (*dest++)
		;
	dest--;
	while (*src && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (p);
}
