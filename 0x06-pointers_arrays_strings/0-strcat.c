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
	int len1, len2, n;
	len1 = strlen(dest);
	len2 = strlen(src);

	for (n = 0; n <= len2; n++)
	{
		dest[len1 + n] = src[n];
	}
	printf("name is: %s\n", dest);
	return (dest);
}
