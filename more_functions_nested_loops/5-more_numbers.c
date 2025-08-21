#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int C;

	for (c = 0; c <= 9; c++)
	{
		for (C = 0; C <= 14; C++)
		{
			if (C > 9)
			{
				_putchar('1');
			}
			_putchar((C % 10) + '0');
		}
		_putchar('\n');
	}
}
