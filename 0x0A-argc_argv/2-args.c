#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: number of arguments to the program
 * @argv: argument(s) passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}

	return (0);
}
