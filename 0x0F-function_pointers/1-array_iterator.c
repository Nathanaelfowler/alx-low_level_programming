#include <stddef.h>

/**
 * array_iterator - entry point
 * @array: an array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if(action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
