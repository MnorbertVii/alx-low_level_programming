#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 * Return: Always 0
 */

void print_numbers(void)
{
	int char; 

	for (char = 48; char < 58; char++)
	{
		_putchar(char);
	}
	_putchar("\n");
}
