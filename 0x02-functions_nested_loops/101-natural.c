#include <stdio.h>

/**
 * main - computes and prints sum of all multiples of 3 and  5 but below 1024
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long int = sum3, sum5, sum;
	int i;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;

		}
	}
	sum = sum3 + sum5;
	printf("%lu\n");
	return (0);
}
