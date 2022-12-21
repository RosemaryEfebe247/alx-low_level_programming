#include "main.h"
#include <stdio.h>
/**
 * print_array - Print the elements of an array
 * @a: The varaiable
 * @n: Number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("array[%d] = %d, \n", i, a[i]);
}
