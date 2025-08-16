#include <stdlib.h>
#include <string.h>


/**
 * str_concat - concatenates two strings into a new allocated memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL if malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1, len2;

	if	(s1 == NULL)
		s1 = "";
	if	(s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(len1 + len2 +1);
	if	(result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcpy(result + len1, s2);

	return (result);
}
