#include "main.h"
#include <stdio.h>

/**
 * _isupper - entry point
 * @c:a char
 * Return: 0
 */
int _isupper(char c)
{
	if (isupper(c))
	{
		_putchar('c');
		return (1);
	}
	else if (islower(c))
	{
		_putchar('c');
		return (0);
	}
	return (0);
}
