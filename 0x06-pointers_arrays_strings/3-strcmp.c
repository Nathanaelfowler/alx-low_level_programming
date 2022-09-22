#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - entry point
 * @s1: a char
 * @s2: a char
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int flag;

	flag = strcmp(s1, s2);

	return (flag);
}
