#include "main.h"
#include <stddef.h> /* NULL üçün */

/**
 * _strchr - locates a character in a string
 * @s: string pointer
 * @c: character to find
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	/* Əgər c = '\0' isə, stringin sonunu qaytar */
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
