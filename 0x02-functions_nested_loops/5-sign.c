#include "main.h"
/*
 * print_sign - prints the sign of a number
 * @num: variable of number to be checked
 * Return: 1 if + and is greater than zero,
 * 0 prints 0 if number is 0,
 * -1 and prints - if number is less than zero 
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	} else if (num == 0)
	{
		_putchar(48);
		return (0);
	} else if (num < 0)
	{
		_putchar('-');
	}
	return (-1);
}
