#include "main.h"

/**
 * get_sqrt - helps to get natural square root
 * @sr: check if this is the square root
 * @num: the number to be checked
 *
 * Return: the natural square root if it exists OR
 * -1 if it doesn't.
 */
int get_sqrt(int num, int sr)
{
	if (num == sr * sr)
	{
		return (sr);
	}
	else if (sr < num)
	{
		return (get_sqrt(num, ++sr));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number whose square root is returned.
 *
 * Return: the natural square root if it exists OR
 * -1 if it doesn't.
 */
int _sqrt_recursion(int n)
{
	int get_sqrt(int num, int sr);

	int sr = 1;

	return (get_sqrt(n, sr));
}
