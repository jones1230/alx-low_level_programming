#include "main.h"

/**
 * check_strlen - return the length of a string
 * @s: the string to be checked.
 *
 * Return: the length of the string
 */
int check_strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += check_strlen(s + l);
	}

	return (l);
}

/**
 * check_pal - helper function to check if string is palindrome
 * @s: string to be checked
 * @l: length of @s
 * @i: index of @s
 *
 * Return: -1 if string is a palindrome
 * otherwise return 0.
 */
int check_pal(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);

	if (s[i] == s[l - i - 1])
		return (check_pal(s, l, i + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to be checked.
 *
 * Return: 1 if string is a palindrome
 * otherwise return 0.
 */
int is_palindrome(char *s)
{
	int check_strlen(char *s);
	int check_pal(char *s, int l, int i);
	int i = 0;
	int l = check_strlen(s);

	if (!(*s))
		return (1);

	return (check_pal(s, l, i));
}
