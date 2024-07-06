#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments to the program
 * @argv: argument(s) passed to the program
 *
 * Return: 0 if the program receives two arguments
 * otherwise return 1
 */
int main(int argc, char *argv[])
{
	int a, b, t;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		t = a * b;

		printf("%d\n", t);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
