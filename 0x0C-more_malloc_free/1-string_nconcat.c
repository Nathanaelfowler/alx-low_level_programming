#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - entry point
 * @s1: a char
 * @s2: a char
 * @n: an unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int s1len;
	int s2len;
	int i, j;
	int si = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;
	
	if (si >= s2len)
	{
		si = s2len;
		s3 = malloc(sizeof(char) * (s1len + s2len + 1));
	}
	else
		s3 = malloc(sizeof(char) * (s1len + n + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < si; j++)
	{
		s3[i++] = s2[j];
	}
	s3[i++] = '\0';
	return (s3);
}
