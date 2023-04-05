#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment's number of bytes
 * @accept: bytes from
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				num++;
				break;
			}
			else if (accept[c + 1] == '\0'
					return (num);
					}
					s++;
					}
					return (num);
}
