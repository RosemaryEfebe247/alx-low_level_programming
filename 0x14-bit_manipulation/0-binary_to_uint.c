#include "main.h"
/**
 * binary_to_uint - Converts from binary to decimal
 * @b: Pointer to the char characters
 * Return: The value in dec. or NULL if not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == 0)
		return (0);
	for (len = 0; b[len]; )
		len++;
	len = len - 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
