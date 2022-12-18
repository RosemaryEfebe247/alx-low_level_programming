#include <stdio.h>

/**
 * main - print the alphabet in lower case
 *
 * return: Always 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
		putchar('\n');
	return (0);
}
