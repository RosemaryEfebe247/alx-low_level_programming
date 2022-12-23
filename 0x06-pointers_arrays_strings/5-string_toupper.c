#include "main.h"
/**
 * string_toupper - Capitalize string
 * @str: Variable holder
 * Return: Always str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
			/*convert to uppercase subtracting 32 from their ASCII value*/
			str[i] -= 32;
		i++;
	}
	return (str);
}
