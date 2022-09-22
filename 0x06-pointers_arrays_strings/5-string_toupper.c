#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - entry point
 * @s: a char
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
