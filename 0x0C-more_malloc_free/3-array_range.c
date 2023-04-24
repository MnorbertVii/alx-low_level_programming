#include "main.h"

/**
 * array_range - a function that creates the array of integers
 * @min: miin range of values stored
 * @max: max range of values
 *
 * Return: pointer to the new array
 *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

