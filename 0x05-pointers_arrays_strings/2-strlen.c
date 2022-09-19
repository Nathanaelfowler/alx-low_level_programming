#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - entry point
 * @s: a char
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
