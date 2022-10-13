#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - func. that prints a name
 * @name: the name
 * @f: a function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	printf("Hello, my name is %s\n", name);
	
	f = print_name;
	f("BOB DYLAN");
}
