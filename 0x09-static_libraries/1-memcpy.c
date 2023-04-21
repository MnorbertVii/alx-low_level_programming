#include "main.h"

/**
 * _memcpy - copies mempry area
 * @dest: memory where stored
 * @src: memory where to copy
 * @n: n of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
