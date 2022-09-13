#include "main.h"

/**
 * _isalpha - entry point
 * @c: is an int that will use to check for a letter, lowercase or uppercase
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

		else if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		{
			else
				return (0);
		}
	}
}
