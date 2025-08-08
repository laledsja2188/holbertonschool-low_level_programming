#include "main.h"
#include <stddef.h>  /* NULL üçün */

/**
 * _strstr - locates a substring needle in string haystack
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0') /* boş substring varsa, haystack-i qaytar */
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
