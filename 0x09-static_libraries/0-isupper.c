#include "main.h"
#include <stdio.h>

/**
 * _isupper - entry point
 * @c:a char
 * Return: 0
 */
int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
