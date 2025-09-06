#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which the factorial is calculated.
 *
 * Return: The factorial of the number. If n is negative, returns -1.
 *         Factorial of 0 is 1.
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
