#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function reverses the characters in a string
 * using a two-pointer approach.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char z;

	while (s[j])
		j++;

	j--;

	while (i < j)
	{
		z = s[i];
		s[i] = s[j];
		s[j] = z;
		i++;
		j--;
	}
}
