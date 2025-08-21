#include "main.h"
/**
 * print_triangle - Prints a triangle.
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, sym;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (sym = 1; sym <= size - row; sym++)
			{
				_putchar(' ');
			}
			for (sym = 1; sym <= row; sym++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
