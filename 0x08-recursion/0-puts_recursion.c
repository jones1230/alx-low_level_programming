#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline
 * @s: pointer of Input string
 * Return: String
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		return;
	}
	else
	{
		_putchar(s);
	}
	_putchar('\n');
}
