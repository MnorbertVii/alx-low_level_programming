#include "main.h"
/**
 * print_alphabet_x10 -prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	counter = 0;

	while (counter < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		counter++;
	}
}