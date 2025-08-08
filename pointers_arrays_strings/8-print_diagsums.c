#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of size n
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (n x n)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];         // əsas diaqonal
		sum2 += a[i * size + (size - 1 - i)]; // ikinci diaqonal
	}

	printf("%d, %d\n", sum1, sum2);
}
