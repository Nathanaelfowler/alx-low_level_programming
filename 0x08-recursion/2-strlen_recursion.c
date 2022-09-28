#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a char
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len;

	if (s == 0)
		return (0);
	len = strlen(s);
	return (len);
}
