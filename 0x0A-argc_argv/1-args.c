#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
	{	
		printf("%d\n", argc);
	}
	else
		printf("%d\n", 0);
	return (0);
}
