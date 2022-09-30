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
	printf("%d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
