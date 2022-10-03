#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - entry point
 * @str: a char
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *tar;
	unsigned int i = 0;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	tar = malloc(sizeof(char) * (i + 1));
	
	if (tar == NULL)
		return (NULL);

	while (str[l])
	{
		tar[l] = str[l];
		l++;
	}
	tar[l + 1] = 0;
	return (tar);
}
