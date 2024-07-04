#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;
OAOAOA
OA	for (index = len - 1; index >= len / 2; index--)
OA	{
OAOA		tmp = s[index];
OA		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
OA	}
OA}
