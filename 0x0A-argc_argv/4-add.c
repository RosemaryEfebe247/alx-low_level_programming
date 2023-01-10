#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function to print sum of num
 * @argc: the argument count
 * @argv: the argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j, sum = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (j = 1; argv[j]; j++)
	{
		strtol(argv[j], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
