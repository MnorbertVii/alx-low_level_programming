#include "variadic_functions.h"

/**
 * sum_them_all - adds all.
 * @n: the number of parameters passed
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	int summation;
	unsigned int a;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		summation += va_arg(ap, int);

	va_end(ap);

	return (summation);
}
