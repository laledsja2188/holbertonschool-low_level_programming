#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers to iterate over.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to apply on each element.
 *
 * Description: Iterates through the array and applies the given function to
 * each element. If array or function pointer is NULL, the function does
 * nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
