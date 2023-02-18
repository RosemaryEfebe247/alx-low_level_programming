#include "main.h"
/**
 * _isalpha - Function that checks for alphabet
 * @c: the character
 * Return: Always 1 or 0
 */
int _isalpha(int c)
{
	if (c <= 1 && c >= 9)
		return (0);
	else
		return (1);

	return (0);
}
