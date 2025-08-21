#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: the number of times the character \
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= n; row++)
	{
		for (space = 0; space < row - 1; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
