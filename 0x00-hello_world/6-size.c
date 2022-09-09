#include <stdio.h>

/**
 * main - print the string in the printf function
 * Description: using the main function
 * this program prints the size of various types
 * Return: 0
 */
int main(void)
{  
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	//sizeof indicates the size of the variables
	printf("Size of char: %c bytes\n", sizeof(c));
	printf("Size of int: %d bytes\n", sizeof(i)); 
	printf("Size of long int: %ld bytes\n", sizeof(li));
	printf("Size of long long int: %lld bytes\n", sizeof(lli));
	printf("Size of float: %f bytes\n", sizeof(f));

	return (0);
}