#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - entry point
 * @s1: a char
 * @s2: a char
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, ss = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s3 = malloc(sizeof(char) * len);
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[ss] = s1[i];

	for (i = 0; s2[i]; i++)
		s3[ss] = s2[i];

	return (s3);
}
