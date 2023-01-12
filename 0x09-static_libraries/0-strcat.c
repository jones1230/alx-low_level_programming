#include "main.h"

/**
 * _strcat - a functionm that concatenates two strings.
 * @dest: Pointer of First string
 * @src: Pointer of Second string
 * Return: Pointer of dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
