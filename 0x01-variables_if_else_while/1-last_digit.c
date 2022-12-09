#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Function finds last number and analyze with conditions
 *
 *Return: Always 0(Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%d and is 0\n", n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("%d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
