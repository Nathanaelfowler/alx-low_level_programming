#include "main.h"

/**
 * more_numbers - entry point
 * Return: return numbers
 */
void more_numbers(void)
{
	int i, ti;

	for (i = 0; i < 10; i++)
	{
		for (ti = 0; ti < 15; ti++)
		{
			if (ti >= 10)
			{
				_putchar((ti / 10) + '0');
			}
			_putchar((ti % 10) + '0');
		}
		_putchar('\n');
	}
}
