#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: argument(s) passed to the program
 *
 * Return: 0 if all arguments are positive numbers
 * otherwise return 1
 */
int main(int argc, char *argv[])
{
	int a, b, t = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		t += atoi(argv[a]);
	}

	printf("%d\n", t);

	return (0);
}
