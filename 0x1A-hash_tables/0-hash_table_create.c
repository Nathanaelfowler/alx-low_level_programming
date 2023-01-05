#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_create - function to create a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	/**allocate table*/
	hash_table_t *table = malloc(sizeof(hash_table_t) * 1);

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	/**allocate table items*/
	table->array = malloc(sizeof(hash_table_t *) * size);

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
