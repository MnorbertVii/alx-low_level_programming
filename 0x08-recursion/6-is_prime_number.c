#include "main.h"

/**
 * control - checks if number is prime
 * @x: integer
 * @y: integer
 * Return: integer
 *
 */

int control(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (control(x + 1, y));
}

/**
 * is_prime_number - tells if a number is prime
 * @n: integer to be checked
 * Return: integer
 *
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (control(2, n));
}
