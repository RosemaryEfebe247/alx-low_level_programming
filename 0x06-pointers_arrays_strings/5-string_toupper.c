#include "main.h"
/**
 * string_toupper - Capitalize string
 * @ptr: Variable holder
 * Return: Always 0
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'Z')
			/*convert to uppercase subtracting 32 from their ASCII value*/
			ptr[i] = ptr[i] - 32;
	}
	return (0);
}
