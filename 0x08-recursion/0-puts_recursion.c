#include "main.h"
/**
 * _puts_recursion - Function to print a string
 * @s: String pointer
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
