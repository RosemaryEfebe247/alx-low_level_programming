#include "main.h"
/**
 * _memcpy - Function to copy memory data
 * @dest: file to be copied to
 * @src: File to be copied
 * @n: Number of bytes
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
