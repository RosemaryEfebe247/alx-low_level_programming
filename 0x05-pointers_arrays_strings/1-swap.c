#include "main.h"

/**
 * swap_int - To swap value of a and b
 * @a: One value
 * @b: another value to be swapped
 * Return: *a = *b
 */
int swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

	return (*a = *b);
}
