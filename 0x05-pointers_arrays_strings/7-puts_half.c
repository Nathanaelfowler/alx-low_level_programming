#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - entry point
 * @str: a char
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string = strlen(str);
	int middle = length_of_the_string / 2;

	for (i = 0; i <= middle; i++)
	{
		if (length_of_the_string % 2 == 1)
		{
			puts_half((length_of_the_string - 1) / 2);
		}
		else
		{
			puts_half(length_of_the_string / 2);
		}
	}
}
