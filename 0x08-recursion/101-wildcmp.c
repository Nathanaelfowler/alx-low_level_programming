#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - entry point
 * @s1: a char
 * @s2: a char
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 || *s2 != '*')
		return (0);

	if (*s1 == *s2 || *s2 == '*')
		return (1);
}
