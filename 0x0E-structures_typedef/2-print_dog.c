#include "dog.h"
#include <stdio.h>

/**
 * print_dog - entry point
 * struct dog - the data type
 * @d: the pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" \n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
