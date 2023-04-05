#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to
 * memory area dest
 * @dest: memory to find it from
 * @src: memory to store
 * @n: bytes
 * Return: a pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;

	for (; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
