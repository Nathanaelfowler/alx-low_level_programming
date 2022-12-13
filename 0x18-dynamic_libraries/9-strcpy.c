#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - entry point
 * @dest: a char
 * @src: a char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
