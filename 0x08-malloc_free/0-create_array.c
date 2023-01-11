#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates and initializes a malloc
 * @size: Size of memory
 * @c: Initializing char
 * Return: Null if size is 0 or str is null, return str if success
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
