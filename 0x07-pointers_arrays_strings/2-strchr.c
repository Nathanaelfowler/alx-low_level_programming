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
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (*s != c)
			return (NULL);
	}
}
