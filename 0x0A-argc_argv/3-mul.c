#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: an int
 * @argv: a char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc <= 1)
	{
		printf("ERROR\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
