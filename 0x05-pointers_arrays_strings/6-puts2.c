#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string in help
 * Return: noen, prints out
 */

void puts2(char *str)
{
	int longeur = 0;
	int temp = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		longeur++;
	}
	temp = longeur - 1;
	for (a = 0; a <= temp; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
