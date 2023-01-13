#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -Function that allocates memory
 * @b: Size of char
 * exit: 98
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);

}
