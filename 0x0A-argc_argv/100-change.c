#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: total number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 if number of arguments passed is exactly 1
 * otherwise return 1
 */
int main(int argc, char *argv[])
{
	int n, o, t;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	t = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (o = 0; o < 5 && n >= 0; o++)
	{
		while (n >= coins[o])
		{
			t++;
			n -= coins[o];
		}
	}

	printf("%d\n", t);
	return (0);
}
