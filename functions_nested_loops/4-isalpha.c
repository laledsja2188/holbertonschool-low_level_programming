#include "main.h"
#include <ctype.h>
/**
 * _isalpha -  Checks for alphabetic character.
 * @c: The character to check
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
