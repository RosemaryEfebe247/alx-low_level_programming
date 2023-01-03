#include "main.h"
#include <string.h>
/**
 * _strpbrk - The function that returns the string that marches a byte
 * @s: The string subset
 * @accept: The string in the accept region
 * Return: A pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
