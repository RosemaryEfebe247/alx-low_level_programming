#include "main.h"
/**
 * rev_string - Reverse the string
 * @s: String variable
 */
void rev_string(char *s)
{
	int n = 0;
	int i, j;
	char l;

	while (s[n] != '\0')
		n++;
	j = n - 1;
	for (i = 0; i < j; i++)
	{
		l = s[i];
		s[i] = s[j];
		s[j] = l;
		j--;
	}
}
