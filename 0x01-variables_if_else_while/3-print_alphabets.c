#include <stdio.h>

/**
 *main - Prints all alphabets in lower case
 *
 *Return: Always 0(Sucess)
 */
int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}

