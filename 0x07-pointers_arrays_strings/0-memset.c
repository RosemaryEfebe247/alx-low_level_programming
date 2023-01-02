#include "main.h"
/**
 * _memset - Function to use
 * @s: Pointer to be location to be filled
 * @b: Value to be used to fill
 * @n: Number of byte to be filled
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		s[counter] = b;
	return (s);
}
