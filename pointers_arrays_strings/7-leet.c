#include "main.h"

/**
 * leet - 1337 hehe
 * @s: stringg
 *
 * Return: returnnnn
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (s);
}
