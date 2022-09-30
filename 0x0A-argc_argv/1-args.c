#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts the no. of arg
 * @argv: value of each string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	
	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
