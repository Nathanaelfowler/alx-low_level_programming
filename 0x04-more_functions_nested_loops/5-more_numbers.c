#include "main.h"

/**
 * more_numbers - entry point
 * Return: return numbers
 */
void more_numbers(void)
{
	int i;
	int a = 1;

	while (a <= 10)
	{

		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');

		a++;
	}
}
