#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int a, c;

	a = 0;
	while (s[a] != '\0')
		a++;

	for (c = a - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\0');
}
