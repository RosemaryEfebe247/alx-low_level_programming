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
	int num1, num2, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	multi = num1 * num2;
	printf("%d\n", multi);
	return (0);
}
