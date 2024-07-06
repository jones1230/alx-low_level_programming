#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y if y > 0.
 * -1 if y < 0;
 */
int _pow_recursion(int x, int y)
{
	int val = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	val *= _pow_recursion(x, y - 1);
	return (val);
}
