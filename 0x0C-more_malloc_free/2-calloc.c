#include "main.h"
/**
 * _calloc - fxn to do calloc using malloc
 * @nmemb: number of elements
 * @size: siz eof each element
 * Return: pointer to calloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nemb * size; i++)
		memory[i] = 0;
	return (memory);
}
