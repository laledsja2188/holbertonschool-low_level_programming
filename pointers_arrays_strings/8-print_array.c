#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the integer array
 * @n: Number of elements to print
 *
 * Description: Prints elements separated by comma and space.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
