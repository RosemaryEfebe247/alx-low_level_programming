#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - The variodic functon to sum positive num
 * @n: The last fixed argument argN
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	va_start(ptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	sum += va_arg(ptr, unsigned int);
	va_end(ptr);
	return (sum);
}
