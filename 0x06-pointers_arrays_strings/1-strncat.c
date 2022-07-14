#include "main.h"

/**
 * _strncat - concatenates n bytes from a str to another
 * @dest: destination str
 * @src: source str
 * @n: no. of bytes of str to join
 * Return: a pointer to the resulting str dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}


