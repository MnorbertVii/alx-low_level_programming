#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be checked
 * Return: length of the string
 *
 *
 */

int _strlen_recursion(char *s)
{
	int los = 0;

	if (*s)
	{
		los++;
		los += _strlen_recursion(s + 1);
	}
	return (los);
}
