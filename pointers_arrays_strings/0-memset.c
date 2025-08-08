#include "main.h"
/**
 * *_memset - Fills memory with a constant byte.
 * @s: the memory area(pointer)
 * @b: The byte to fill the memory with
 * @n: bytes of the memory area
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

