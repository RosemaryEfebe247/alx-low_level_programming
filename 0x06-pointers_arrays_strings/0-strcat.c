#include "main.h"
/**
 * _strcat - Function to concatenate two strings
 * @dest: String variable to append to
 * @src: String variable to append
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;
	int l, j;

	l = 0;

	while (dest[l] != '\0')
		l++;
	for (j = 0; src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (ptr = dest);
}
