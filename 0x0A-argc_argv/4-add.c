#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: arguments number
 * @argv: arguments
 * Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	int a, num;
	int sum = 0;
	char *f;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		num = strtol(argv[a], &f, 10);
		if (*f)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
