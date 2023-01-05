#include "main.h"
/**
 * factorial - multiplication of numbers
 * @n: number to multiply
 * Return: The factorial result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (factorial(n * factorial(n - 1)));
}
