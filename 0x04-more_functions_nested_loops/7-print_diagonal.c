#include "main.h"

/**
 * print_diagonal - entry point
 * @n: an int
 * Return: void
 */
void print_diagonal(int n)
{
	int t = 1;
	int s = 1;

	while (t <= n)
	{
		while (s < t)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		t++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
