#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Function to print numbers
 * @separator: Pointer to the number seperator symbol
 * @n: argN
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ptr, int));
	/* to print sepeartor before the next n, i less than n-1 */
	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
