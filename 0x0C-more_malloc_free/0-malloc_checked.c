#include "main.h"
/**
 * malloc_checked - function to assign memory using malloc
 * @b: size to be alloc
 * Return: pointer to alloc memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
