#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 *
 * @argc: number of arrguments
 *
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}
