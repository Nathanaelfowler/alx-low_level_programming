#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts the no. of arg
 * @argv: value of each string
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
