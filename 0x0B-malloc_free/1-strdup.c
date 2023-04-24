#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string which is
 * a duplicate of the string str
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int a, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
		copy[a] = str[a];
	copy[len] = '\0';

	return (copy);
}
