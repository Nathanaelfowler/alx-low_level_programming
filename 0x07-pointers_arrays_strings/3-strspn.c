#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: a char
 * @accept: a char
 * Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
