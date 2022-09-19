#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - entry point
 * @s: a char
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (0);
}
