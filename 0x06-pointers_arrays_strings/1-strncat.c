#include "main.h"
#include <string.h>
/**
 * _strncat - Terminate string concatenation by n bytes
 * @dest: Variable one
 * @src: variable two
 * @n: number of byts
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
