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
	printf("%d\n", argc - 1);
	return (0);
}
