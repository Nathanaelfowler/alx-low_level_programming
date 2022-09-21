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
	strcpy(dest, src);
	printf("strcpy(dest, src) : %s\n", dest);

	return (dest);
}
