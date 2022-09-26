#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memset - Write a function that fills memory with a constant byte
 * @s: a char
 * @b: a char
 * @n: an int
 * Return: char s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
