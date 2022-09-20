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
	int j;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
