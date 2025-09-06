#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive  numbers.
 *
 * @argc: number of arrguments
 *
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum;


	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' ||  argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(argv[i]);
	}
			printf("%d\n", sum);
	}
			return (0);
}
