#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - entry point
 * @str: a char
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
