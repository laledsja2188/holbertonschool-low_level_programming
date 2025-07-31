#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char C;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
	for (C = 'a'; C <= 'f'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
