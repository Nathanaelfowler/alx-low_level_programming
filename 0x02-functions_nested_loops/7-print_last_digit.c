#include "main.h"

/**
 * print_last_digit - entry point
 * @c : an int
 * Return: 0
 */
int print_last_digit(int c)
{
	int d = c % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');
	return ('d');
}
