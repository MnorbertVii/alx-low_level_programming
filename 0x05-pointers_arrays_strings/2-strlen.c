#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: char to be checked
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
