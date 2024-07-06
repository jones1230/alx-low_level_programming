#include "main.h"

/**
 * can_divide - checks if numberis divisible
 * @n: number to be checked
 * @d: divisor
 *
 * Return: 0 if number is divisible
 * otherwise return 1.
 */
int can_divide(int n, int d)
{
	if (n % d == 0)
		return (0);

	if (d == n / 2)
		return (1);

	return (can_divide(n, d + 1));
}

/**
 * is_prime_number - checks if input integer is a prime number.
 * @n: input integer
 *
 * Return: 1 if @n is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	int can_divide(int n, int d);
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (can_divide(n, d));
}
