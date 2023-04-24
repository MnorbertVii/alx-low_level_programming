#include "main.h"

/**
 * string_nconcat - a concatenates two strings.
 *
 * @s1: first chararacter
 * @s2: secound character
 * @n: unsigned int
 *
 * Return: NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *str;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; a++)
		;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; b++)
		;
	}
	if (b > n)
		b = n;
	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		str[c] = s1[c];
	for (c = 0; c < b; c++)
		str[c + a] = s2[c];
	str[a + b] = '\0';
        return (str);
}
