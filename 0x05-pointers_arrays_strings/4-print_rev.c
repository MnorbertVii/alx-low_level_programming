#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int longeur = 0;
	int c;

	while (*s != '\0')
	{
		longeur++;
		s++;
	}
	s--;
	for (c = longeur; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
