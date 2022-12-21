#include "main.h"
/**
 * print_rev - Print reverse of a string
 * @s: Variable holder
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
