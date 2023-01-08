#include <stdio.h>
#include <stdlib.h>
/**
 * main - The function that prints the arguments
 * @argc: The argument
 * @argv: The argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
