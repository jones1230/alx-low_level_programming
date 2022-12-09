#include <stdio.h>

/**
 *main - Prints all alphabets in lower case
 *
 *Return: Always 0(Sucess)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
