#include "main.h"
#include <stddef.h> /* NULL üçün */

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search in
 * @accept: string containing bytes to match
 *
 * Return: pointer to first matching byte in s, or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
