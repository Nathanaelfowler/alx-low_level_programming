#include "main.h"

/**
 * print_line - entry point
 * @n: an int
 * Return: void
 */
void print_line(int n)
{
	while (n <= 10)
	{
		_putchar('_');
		n++;

		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
