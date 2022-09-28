#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: a char
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s == 0)
		return;
	puts(s);
}
