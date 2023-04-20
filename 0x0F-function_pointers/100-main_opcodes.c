#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints the opcodes of its main function.
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the function
 *
 * Return: 0 on success, 1 or 2 otherwise
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: integer
 * @argv: character
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int ae;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	ae = atoi(argv[1]);
	if (ae < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, ae);

	return (0);
}
