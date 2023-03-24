#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c  to stdout
 * @c: character to be printed
 * Return: 1 success otherwise -1 if error detected
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}

