#include "main.h"

/**
 * swap_int - swaps the int values
 * @a: pointer to the 1st value
 * @b: pointer to the 2nd value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

