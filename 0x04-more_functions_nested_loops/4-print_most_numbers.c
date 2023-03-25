#include "main.h"

/**
 * print_most_numbers - will display numbers and exclude
 * some
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c == 50 || c == 52)
			continue;
		else
			_putchar(c);
	}
	_putchar("\n");
}
