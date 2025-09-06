#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using
 * @b: memory size
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == NULL)
		exit(98);
	return (z);
}
