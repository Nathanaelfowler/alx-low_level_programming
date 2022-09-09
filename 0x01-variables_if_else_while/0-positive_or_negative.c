#include <stdio.h>

/**
 * main - prints the number if positive, zero or negative
 * Return: 0
 */
int main(void)
{
	int n;

	  /* your code goes here */
	if (n > 0)
       	{
		printf("%i is positive\n", n);
	}
	else if (n == 0) 
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0) 
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
