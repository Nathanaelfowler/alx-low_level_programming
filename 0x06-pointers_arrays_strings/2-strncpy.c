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
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
