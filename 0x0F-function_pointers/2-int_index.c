#include "function_pointers.h"
/**
 * int_index - Function to print an integer
 * @array: Array of elements
 * @size: Size of array
 * @cmp: The pointer to the function
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
