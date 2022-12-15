#include "main.h"
#include <stdio.h>

/**
 * _isupper()- Check if letter is in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
int _isupper(int c)
{
	int u, l, rv;

	for (u = 65; u <= 96; u++)
	{
		if (c == u)
		{
			rv = 1;
			return (rv);
		}
	}
	for (l = 97; l <= 125; l++)
	{
		if (c == l)
		{
			rv = 0;
			return (rv);
		}
	}
	return (0);
}

