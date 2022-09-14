#include "main.h"

/**
 * print_last_digit - entry point
 * @n: an int
 * Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;

	if ( n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
