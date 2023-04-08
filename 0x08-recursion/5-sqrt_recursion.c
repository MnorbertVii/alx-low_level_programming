#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to find its square root
 *
 * Return: natural square root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find
 * the natural square root of n
 * @n: number
 * @a: counter
 * Return: square root
 */

int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
