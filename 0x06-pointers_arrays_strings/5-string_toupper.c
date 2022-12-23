#include "main.h"
/**
 * string_toupper - Convert to uppercase
 * @str: Variable holder
 * Return: Always str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
