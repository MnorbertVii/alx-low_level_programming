#include "main.h"
/**
 * _pow_recursion - returns  value of one number
 * raised to the power of the other
 * @x: base
 * @y: power
 * Return: value of x raised to the power of y
 *
 */

int _pow_recursion(int x, int y)
{
	/*handle invalid input*/
	if (y < 0)
	{
		return (-1);
	}
	/*base case*/
	if (y == 0)
	{
		return (1);
	}
	/*recursive case*/
	return (x * _pow_recursion(x, y - 1));
}

