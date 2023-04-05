#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: starting address
 * @b: expected value
 * @n: bytes of the memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

