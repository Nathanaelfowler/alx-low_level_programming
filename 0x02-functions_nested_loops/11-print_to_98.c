#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 * @n: an int
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while ( n <= 98)
		{
			_putchar('n');
			if (n != 98)
			{
				_putchar(",");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar('n');
			if (n != 98)
			{
				_putchar(",");
			}
			n--;
		}
	}
	else
	{
		_putchar(98);
	}
	_putchar('\n');
}
