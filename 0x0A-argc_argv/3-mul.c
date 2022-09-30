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

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
