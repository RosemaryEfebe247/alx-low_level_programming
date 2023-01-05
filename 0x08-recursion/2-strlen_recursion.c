#include "main.h"
/**
 * _strlen_recursion - Lenght of a string
 * @s: The string pointer
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1));
	}
}
