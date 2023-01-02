#include "main.h"
#include <string.h>
/**
 * _strchr - Function of a pointer to the first occurrence of a char
 * @s: the string that contains the character
 * @c: The charater to search for
 * Return: A pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
