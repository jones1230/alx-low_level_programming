#include <stdio.h>
#include "main.h"

/**
 * main - Prints string _putchar using a function with same name
 *
 * Return: Always 0(Sucess)
 */

int main(void)
{
	char test[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(test[i]);
	}
	_putchar('\n');

	return (0);
}
