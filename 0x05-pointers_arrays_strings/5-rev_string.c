#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rvrs = s[0];
	int counter = 0;
	int a;

	while (s[counter] != '\0')
		counter++;

	for (a = 0; a < counter; a++)
	{
		counter--;
		rvrs = s[a];
		s[a] = s[counter];
		s[counter] = rvrs;
	}
}
