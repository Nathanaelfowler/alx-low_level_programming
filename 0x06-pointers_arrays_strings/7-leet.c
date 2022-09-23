#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *leet - entry point
 * @s: a the replaced string
 * Return: 0
 */
char *leet(char *s)
{
	char *r = s;
	char a[5] = {'a', 'e', 'o', 't', 'l'};
	char n[5] = {4, 4, 0, 2, 1}
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = n[i] + '0';
		}
		s++;
	}
	return (r);
}
