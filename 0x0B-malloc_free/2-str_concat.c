#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 If successful and NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int vars1, vars2, size;

	vars1 = 0;
	vars2 = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s1 == NULL)
		s2 = '\0';

	for (i = 0; s1[i] != '\0'; i++)
		vars1++;
	vars1 += 1;

	for (i = 0; s2[i] != '\0'; i++)
		vars2++;
	size = vars1 + vars2;

	ptr = malloc(sizeof(char) * (size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (vars1 - 1); i++)
		ptr[i] = s1[i];
	j = i;
	i = 0;

	for (; j < size; j++, i++)
		ptr[j] = s2[i];

	return (ptr);
	free(ptr);
}
