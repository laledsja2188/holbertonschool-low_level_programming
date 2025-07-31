#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @c: The number to extract the last digit from.
 *
 * Return: The value of the last digit
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
