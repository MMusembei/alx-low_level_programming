#include "main.h"

/**
 * *_memset - fills memory with a const byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: num of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - fxn to do calloc using malloc
 * @nmemb: number of elements
 * @size: siz eof each element
 * Return: pointer to calloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	_memset(memory, 0, nmemb * size);
	return (memory);
}
