#include "main.h"
/**
 * _print_rev_recursion - Prints string in reverse
 * @s: String input
 * Return: reverse of string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
