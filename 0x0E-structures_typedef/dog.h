#ifndef STRTYP
#define STRTYP

/**
 * struct dog - data type
 * @name: the first char member
 * @age: the second float member
 * @owner: the third char member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*STRTYP*/
