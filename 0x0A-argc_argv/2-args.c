#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: for counting no. of arg
 * @argv: for finding the value of the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
