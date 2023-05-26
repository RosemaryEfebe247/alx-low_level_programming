#include "main.h"
/**
 * get_bit - Bit of a value
 * @n: the bit
 * @index: the value to get the bit at
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
