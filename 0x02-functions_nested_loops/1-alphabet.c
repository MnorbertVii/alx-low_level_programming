#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char alphbt;

	alphbt = 'a';

	while (alphbt <= 'z')
	{
		_putchar(alphbt);
		alphbt++;
		_putchar('\n');
	}
}
