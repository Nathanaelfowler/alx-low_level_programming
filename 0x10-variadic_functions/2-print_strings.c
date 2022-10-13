#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - func. to print strings
 * @separator: string to be printed between the strings
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;

	va_list mystr;

	va_start(mystr, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(mystr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (index < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mystr);
}
