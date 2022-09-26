#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: a char
 * @src: a char
 * @n: an int
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
