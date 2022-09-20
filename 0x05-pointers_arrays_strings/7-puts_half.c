#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - entry point
 * @str: a char
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length;
	int middle = (length / 2);

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if ((length % 2) == 1)
		middle = ((length + 1) / 2);

	for (i = middle; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
