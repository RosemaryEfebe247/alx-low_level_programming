#include "function_pointers.h"
/**
 * array_iterator - Function to use a function to iterate array
 * @array: Array of elements
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	for (i = 0; i < size; i++)
		action(array[i]);
}
