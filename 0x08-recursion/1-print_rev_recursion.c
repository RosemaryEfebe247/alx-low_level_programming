#include "main.h"
/**
 * _print_rev_recursion - Functin to print string reverse
 * @s: Pointer to string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
