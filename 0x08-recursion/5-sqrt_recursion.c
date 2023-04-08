#include "main.h"

/**
 * _verify - verifies the square root
 * @x: integer
 * @y: integer
 *
 * Return: integer
 *
 */

int _verify(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (_verify(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to find sqrt of
 * Return: natural square root of n
 *
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_verify(1, n));
}
