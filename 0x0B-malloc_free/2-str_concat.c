#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated.
 * and returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, len1, len2, lenT;
	char *res;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			len2++;
	}

	lenT = len1 + len2;
	res = (char *)malloc(sizeof(char) * (lenT + 1));
	if (res == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		res[a] = s1[a];
	for (b = 0; b < len2; b++, a++)
		res[a] = s2[b];
	res[lenT] = '\0';

	return (res);
}
