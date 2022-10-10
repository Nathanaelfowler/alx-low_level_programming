#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - entry point
 * @*d: a pointer of the struct 'struct dog'
 * @name: a char, first mem
 * @age: a float. second mem
 * @owner: a char, third mem
 * details is the variable to the struct
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;	
}
