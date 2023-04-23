#include "main.h"
#include <stdio.h>

/**
 * main - prijts all arguments that it receives
 * @argc: number of arguments
 * @argv: arrat of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
