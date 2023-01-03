#include "main.h"
#include <string.h>
/**
 * _strspn - the Function that returns the byte in the initial segment of s
 * @s: The string segment
 * @accept: The accept region
 * Return: The number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
