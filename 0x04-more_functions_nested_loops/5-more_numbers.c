#include "main.h"

/**
 * more_numbers - entry point
 * Return: return numbers
 */
void more_numbers(void)
{
	int i;

	while (i <= 9)
	{

		for (i = 0; i <= 14; i++)
		{
			_putchar((i % 10) + '0');
		}
		_putchar('\n');

		i++;
	}
}
