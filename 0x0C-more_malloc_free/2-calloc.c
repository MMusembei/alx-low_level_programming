#include "main.h"

/**
 * _calloc - fxn to do calloc using malloc
 * @nmemb: number of elements
 * @size: siz eof each element
 * Return: pointer to calloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		memory[i] = 0;
	return (memory);
}
