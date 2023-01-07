#include "main.h"

/**
 * wildcmp - compares two strings considering the wildcard *
 * @s1: first string to be compared
 * @s2: second string to be compared, can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */


int wildcmp(char *s1, char *s2)
{
	char *last_sc = 0;
	char *last_s1_sc = 0;

	return (full_compare(s1, s2, last_sc, last_s1_sc));
}

/**
 * full_compare - auxiliar function to work with recursion
 * @s1: first string to be compared
 * @s2: second string to be compared, can contain the special character *
 * @last_sc: last position in s2 where a char after a * was found
 * @last_s1_sc: position in string s1 where comparison began after found a *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int full_compare(char *s1, char *s2, char *last_sc, char *last_s1_sc)
{
	int sc = 0;

	if (*s2 == '*')
	{
		sc = 1;
		if (!find_next_c(&s2, s2))
			return (1);
		last_sc = s2;
		last_s1_sc = s1;
	}

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);

		return (1 * full_compare(s1 + 1, s2 + 1, last_sc, last_s1_sc));
	}

	if (sc || (*(s2 - 1) == '*'))
	{
		if (!find_after_sc(&s1, s1, *s2))
			return (0);
		return (1 * full_compare(s1 + 1, s2 + 1, last_sc, last_s1_sc));
	}

	if (last_sc && *s2 != '\0')
	{
		s2 = last_sc;
		s1 = last_s1_sc + 1;
		full_compare(s1, s2, last_sc, last_s1_sc);
		return (1);
	}
	return (0);
}

/**
 * find_next_c - finds next character different than * and update s2 address
 * @s2: address of pointer to s2, used to update s2 addrss out of this function
 * @as2: auxiliar pointer to later update s2 addrss
 *
 * Return: 1 if character is found, 0 otherwise.
 */

int find_next_c(char **s2, char *as2)
{
	if (*as2 == '\0')
		return (0);

	if (*as2 != '*')
	{
		*s2 = as2;
		return (1);
	}

	if (find_next_c(s2, as2 + 1) == 0)
		return (0);

	return (1);
}

/**
 * find_after_sc - finds the next character in s1 mathing in s2 address
 * @s1: address of pointer to s1, used to update s1 addrss out of this function
 * @as1: auxiliar pointer to later update s1 addrss
 * @s2: character to match within s1
 *
 * Return: 1 if character is found, 0 otherwise.
 */

int find_after_sc(char **s1, char *as1, char s2)
{
	if (*as1 == '\0')
		return (0);

	if (*as1 == s2)
	{
		*s1 = as1;
		return (1);
	}
	if (find_after_sc(s1, as1 + 1, s2) == 0)
		return (0);

	return (1);
}
