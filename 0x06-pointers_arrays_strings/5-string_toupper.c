#include "main.h"
/**
 * string_toupper - Capitalize string
 * @ptr: Variable holder
 * Return: Always 0
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i])
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'Z')
			/*convert to uppercase subtracting 32 from their ASCII value*/
			ptr[i] -= 32;
		i++;
	}
	return (ptr);
}
