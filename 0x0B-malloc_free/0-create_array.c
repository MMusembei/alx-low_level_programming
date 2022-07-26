#include <stdlib.h>

/**
 * create_array - create a dynamic array and init char
 * @size: size of array
 * @c: char to be init
 * Return: pointer to null or array
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	A = malloc(sizeof(char) * size);
	if (A == NULL)
		return (NULL);
	while (i < size)
	{
		A[i] = c;
		i++;
	}
	return (A);
}
