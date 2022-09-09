#include <stdio.h>

/**
 * main - prints the number if positive, zero or negative
 * Return: 0
 */
int main(void)
{
	int a;

	  /* your code goes here */
	if (a > 0) {
		printf("%i is positive\n", a);
	}
	else if (a == 0) {
		printf("%i is zero\n", a);
	}
	else if (a < 0) {
		printf("%i is negative\n", a);
	}
	return (0);
}
