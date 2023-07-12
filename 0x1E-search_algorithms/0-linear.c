#include "search_algos.h"
/**
 * linear_search - A function for Linear search
 * @array: A pointer to the array of values
 * @size: The size of the array
 * @value: The value to search for
 * Return: first value found or -1 when Null
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
