#include "main.h"

/**
 * print_diagonal - entry point
 * @n: an int
 * Return: void
 */
void print_diagonal(int n)
{
	int t, s;

	for (t = 1; t <= n; t++)
	{
		for (s = 1; s < t; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
