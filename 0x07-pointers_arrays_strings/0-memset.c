#include "main.h"

/**
 * _memset - fills n bytes of the memory pointed with s and with the byte b
 * @s: memory area
 * @b: char to copy
 * @n: no. times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


