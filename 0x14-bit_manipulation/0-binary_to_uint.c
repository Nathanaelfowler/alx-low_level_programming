#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars and a string
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0; /*the converted number, unsigned int*/
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			dec <<= 1;
			if (b[i] == '1')
				dec += 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (dec);
}
