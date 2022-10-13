#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - func. to sum all the arg
 * @n: const unsigned int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum;
	va_list myint;

	va_start(myint, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (index = 0; index < n; index++)
	{
		sum += va_arg(myint, int);
	}
	va_end(myint);
	return (sum);
}
