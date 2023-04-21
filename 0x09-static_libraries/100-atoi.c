#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to check
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int sgn = 1;
	int a = 0;
	unsigned int result = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a]  != '\0')
	{
		if (s[a] == '-')
			sgn *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		result = (result * 10) + (s[a] - '0');
		a++;
	}
	result *= sgn;
	return (result);
}
