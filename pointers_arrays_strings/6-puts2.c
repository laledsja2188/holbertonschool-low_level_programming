#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 *
 * Description: Starts with the first character, then prints
 * every other character, followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
