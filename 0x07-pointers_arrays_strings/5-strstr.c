#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strstr - Write a function that locates a substring.
 * @haystack: a char
 * @needle: a char
 * Return: beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);

	}
	return (NULL);
}
