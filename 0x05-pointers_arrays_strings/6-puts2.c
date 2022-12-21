#include "main.h"
/**
 * puts2 - print every other string
 * @str: String variable
 */
void puts2(char *str)
{
	int i;
	int n = 0;

	while (str[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		_putchar(str[n]);
	}
	_putchar('\n');
}
