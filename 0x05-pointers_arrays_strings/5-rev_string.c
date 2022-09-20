#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - entry point
 * @s: a char
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	int middle = length / 2;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
