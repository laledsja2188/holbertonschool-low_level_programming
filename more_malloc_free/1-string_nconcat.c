#include "main.h"
#include <stdlib.h>

/**
 * my_strlen - Returns the length of a string
 * @s: The string
 *
 * Return: Length of s, 0 if s is NULL
 */
unsigned int my_strlen(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}
/**
 * string_nconcat - Concatenates two strings, copying at most n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to copy from s2
 *
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = my_strlen(s1);
	len2 = my_strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
