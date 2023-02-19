#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print all natural numbers from n to 98
 *@n: value to be computed
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}

	for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
