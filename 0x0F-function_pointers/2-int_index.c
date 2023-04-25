#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true
 * else return -1
 * @array: array to be used
 * @size: size of elements in an array
 * @cmp: pointer to a function
 *
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}
	return (-1);
}
