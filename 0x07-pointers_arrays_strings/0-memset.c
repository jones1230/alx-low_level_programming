#include "main.h"
/**
 * _memset - function fills int constant bytes of memory
 * @s: pointer to memory area
 * @n: Size of memry to be filled
 * @b: Constant char
 *
 * Return: s(Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		return (*s);
		s++;
	}
	return (0);
}
