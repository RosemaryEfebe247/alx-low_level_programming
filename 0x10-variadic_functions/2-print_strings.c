#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Functions to print strings
 * @separator: The separator for the strings
 * @n: The argN
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	str = va_arg(ptr, char*);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
		{
			printf("nil");
		}
	printf("%s", str);
	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
