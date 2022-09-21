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
	int j;

	strcat(dest, src);

	dest[j] = '\0';
}
