#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements of an array to be printed
 * @a: array name
 * Return: a in n inputs
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j])
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
