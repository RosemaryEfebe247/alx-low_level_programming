#include "main.h"
/**
 * reverse_array - Reverse the content of an array
 * @a: pointer to variable
 * @n: No of elements in a
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
