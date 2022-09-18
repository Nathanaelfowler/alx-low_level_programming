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
			putchar(Fizz);
		}
		if (j % 5 == 0)
		{
			putchar(Buzz);
		}
		if (j % 3 == 0 && j % 5 == 0)
		{
			putchar(FizzBuzz);
		}
	}
	putchar('\n');
	return (0);
}
