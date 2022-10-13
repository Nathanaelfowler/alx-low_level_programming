#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a func. that prints all the no.
 * @separator: the string to be printed between numbers
 * @n: const unsigned int n
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	int num;

	va_list myfig;

	va_start(myfig, n);

	for (index = 0; index < n; index++)
	{
		num = va_arg(myfig, int);
		printf("%d", num);

		if (index < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(myfig);
}
