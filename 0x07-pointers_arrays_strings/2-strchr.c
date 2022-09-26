#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: a char
 * @c: a char
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
