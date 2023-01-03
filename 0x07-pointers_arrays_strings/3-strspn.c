#include "main.h"
#include <string.h>
/**
 * _strspn - Function to return the prefix substring 
 * @s: The portion of the string to be segmented
 * @accept: The value only in the accept zone
 * Return: The value of s
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
