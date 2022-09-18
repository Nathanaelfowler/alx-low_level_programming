#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @j: an int
 * Return: 0
 */
int main(int j)
{
	char Fizz;
	char Buzz;
	char FizzBuzz;

	for (j = 1; j <= 100; j++)
	{
		if (j == 100)
			printf("%c", Buzz);
		else if (j % 3 == 0)
		{
			printf("%c", Fizz);
		}
		else if (j % 5 == 0)
		{
			printf("%c", Buzz);
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf("%c", FizzBuzz);
		}
		else
			printf("%d ", j);
	}
	printf("\n");
	return (0);
}
