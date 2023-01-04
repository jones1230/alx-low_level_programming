#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory pointed to by s with the constant byte b
 *
 * Return: s(Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		return s;
		s++;
	}
}
