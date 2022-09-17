#include "main.h"

/**
 * more_numbers - entry point
 * Return: return numbers
 */
void more_numbers(void)
{
	int i, ti;

	for (ti = 0; ti <= 10; ti++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
