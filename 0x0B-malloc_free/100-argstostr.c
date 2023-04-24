#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: a pointer to a new string, NULL if it fails
 */
char *argstostr(int argc, char *argv[])
{
	char *s, *t;
	int a, b, c, len = 0;

	if (argc == 0 || argv == NULL)
		return (NULL);

	for (a = 0; a < argc; a++)
	{
		t = argv[a];
		b = 0;

		while (t[b++])
			len++;
		len++;
	}

	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (a = 0, b = 0; a < argc && b < len; a++)
	{
		t = argv[a];
		c = 0;

		while (t[c])
		{
			s[b] = t[c];
			c++;
			b++;
		}
		s[b++] = '\n';
	}
	s[b] = '\0';

	return (s);
}
