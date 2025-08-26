#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 *
 * Description: If the number of characters is odd, the function
 * prints the last (length_of_the_string - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int second_half;

	while (str[len])
		len++;

	if (len % 2 == 0)
		second_half = len / 2;
	else
		second_half = (len + 1) / 2;

	for (i = second_half; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
