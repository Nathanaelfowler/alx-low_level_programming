#include "main.h"

/**
 * print_square - entry point
 * @size: an int
 * Return: 0
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
			for (b = 1; b <= size; b++)
			{
			       	_putchar('#');
			}
			_putchar('\n');
		}
	}
}
