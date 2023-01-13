#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function to create array of chars
 * @size: Size of the array
 * @c: initial array value
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
