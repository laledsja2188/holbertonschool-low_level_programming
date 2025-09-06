#include "main.h"

/**
 * reverse_array - massivin elementlerini tersine cevirir ,betty.
 * @a: aaaaa
 * @n: nnnn
 *
 * Return: returnnjj
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int i;

	while (start < end)
	{
		i = *start;
		*start = *end;
		*end = i;

		start++;
		end--;
	}
}
