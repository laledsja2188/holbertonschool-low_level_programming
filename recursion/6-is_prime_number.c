#include "main.h"
/**
 *is_prime - recursion that calculates if the input is a prime number
 * @n: number
 *
 * @i: iterator
 *
 * Return: 1 if n is prime 0 if n is not prime
 */
int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime(n, i - 1));
}
/**
*is_prime_number - a function that returns 1
*if the input integer is a prime number
*
*@n: number
*
*Return: 1 if number is prime otherwise 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime(n, n - 1));
}
