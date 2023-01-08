#include <stdio.h>
#include <stdlib.h>
/**
 * main - The function to print arg multi
 * @argc: Argumnt count
 * @argv: Argument vector
 * Return: Always 1
 */
int main(int argc, char *argv[])
{
	int multi;
	multi = 1;
	
	if (argc >= 3)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			multi *= atoi(argv[i]);
		}
		printf("%d\n", multi);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
