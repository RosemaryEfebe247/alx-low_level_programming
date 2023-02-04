#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Convert Binary to Decimal
 * @b : pointer to the address of binary
 * Return: result
 * Otherwise - the NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, mult = 1;
	int len;

	if (b == 0)
		return (0);
	for (len = 0; b[len]; )
		len++;
	len -= 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		dec += (b[len] - '0') * mult;
		mult *= 2;
		len--;
	}
	return (dec);
}
