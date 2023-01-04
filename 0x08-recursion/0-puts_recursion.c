#include "main.h"
/**
 * _puts_recursion - Function to print a string
 * @s: String pointer
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i <= *s; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
