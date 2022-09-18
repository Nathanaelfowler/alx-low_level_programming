#include "main.h"

/**
 * print_line - entry point
 * @n: an int
 * Return: void
 */
void print_line(int n)
{
	int l = 1;

	while (l <= n)
	{
		_putchar('_');
		l++;

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
