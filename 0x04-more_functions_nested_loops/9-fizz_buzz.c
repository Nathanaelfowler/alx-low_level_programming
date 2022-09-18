#include <stdio.h>

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
		if (j % 3 == 0)
		{
			printf("%c", Fizz);
		}
		if (j % 5 == 0)
		{
			printf("%c", Buzz);
		}
		if (j % 3 == 0 && j % 5 == 0)
		{
			printf("%c", FizzBuzz);
		}
	}
	printf("\n");
	return (0);
}
