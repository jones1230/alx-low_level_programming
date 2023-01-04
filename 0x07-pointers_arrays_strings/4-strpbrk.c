#include "include.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j = 0;
	int check = 0;
	char *p = NULL;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			check = 0;
			if (s[i] == accept[j])
			{
				p = (s + i);
				check = 1;
				break;
			}
		}
		if (check == 1)
		{
			break;
		}
	}
	return (p);
}
