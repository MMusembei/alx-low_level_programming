#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of ints followed to a newline
 * @a: array to print
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == 0)
			printf("%d", a[j]);
		else 
			printf(", %d", a[j]);
	}
		printf("\n");

}

