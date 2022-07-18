#include <stdio.h>
#include "main.h"

/** 
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a:square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum, sum1;
	int matrix_size = size * size;
	
	sum = 0;
	sum1 = 0;

	for (i = 0; i < matrix_size; i += size + 1)
	{
		sum += a[i];
	}
	for (i = size - 1; i < matrix_size - 1; i += size - 1)
	{
		sum1 += a[i];
	}
	printf("%d, %d\n", sum, sum1);
}


