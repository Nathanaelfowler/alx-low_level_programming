#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a char
 * @accept: a char
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char sech;

	sech = strpbrk(s, accept);
	if (*s == *accept)
		return (s);
	if (*s != accept)
		return (NULL);
}
