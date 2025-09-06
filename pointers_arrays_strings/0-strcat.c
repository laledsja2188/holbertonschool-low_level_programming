#include "main.h"

/**
 * _strcat - stringleri birlesdirir betyycim
 * @dest: Destinationn dd
 * @src: Sourcee ss
 * Return: Returnn Dest..
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
