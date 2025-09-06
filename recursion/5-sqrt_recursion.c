#include "main.h"

/**
*my_sqrt - recursion  that returns the
*natural square root of a number
*
*@n: number
*
*@i: iteratior
*
*@c: counter
*
*Return: square root
*/

int my_sqrt(int n, int i, int c)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (c);
	}

	return (my_sqrt(n - i, i + 2, c + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: number
 *
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (my_sqrt(n, 1, 0));
}
