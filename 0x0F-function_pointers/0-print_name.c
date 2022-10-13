#include <stddef.h>

/**
 * print_name - func. that prints a name
 * @name: the name
 * @f: a function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
