#include "main.h"

#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("the name of the program is: %s\n", *argv);

	return (0);
}
