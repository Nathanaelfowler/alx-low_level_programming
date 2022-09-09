#include <stdio.h>

/**
 * Description: using the main function
 * this program prints the size of various types
 * Return: 0
 */
int main(void)
{  
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	//sizeof indicates the size of the variables
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zn bytes\n", sizeof(intType));
	printf("Size of long int: %zn bytes\n", sizeof(longinttype));
	printf("Size of long long int: %zn bytes\n", sizeof(longlonginttype));
	printf("Size of float: %zn bytes\n", sizeof(floattype));

	return (0);
}
