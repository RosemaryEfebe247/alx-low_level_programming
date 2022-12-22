#include "main.h"
#include <string.h>
/**
 * _strncpy - Function copies string
 * @dest: Variable
 * @src: Varible two
 * @n: Byte
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
