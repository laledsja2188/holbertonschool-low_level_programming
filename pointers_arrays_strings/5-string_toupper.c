#include "main.h"

/**
 * string_toupper - kicik herfleri boyuk edir
 * @s: sssssssss
 *
 * Return: return edirrr
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
