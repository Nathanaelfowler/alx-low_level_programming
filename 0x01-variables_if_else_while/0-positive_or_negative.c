#include <stdio.h>

/**
 * main - prints the number if positive, zero or negative
 * Return: 0
 */
int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	  /* your code goes here */
	if (a > 0) {
		printf("%l is positive\n", a);
	}
	else if (a == 0) {
		printf("%l is zero\n", a):
	}
	else if (a < 0) {
		printf("%l is negative\n", a);
	}
	return (0);
}
