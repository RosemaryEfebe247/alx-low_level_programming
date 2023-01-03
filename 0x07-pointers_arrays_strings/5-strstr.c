#include "main.h"
#include <string.h>
/**
 * _strstr - Find the first occurrance of substring needle in haystack
 * @haystack: Substring containing substring needle
 * @needle: The Substring to search for
 * Return: A pointer to the beginning of located sunstring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
