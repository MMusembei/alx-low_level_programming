#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * then a newline
 * Return: 0 when done
 */

int main(void)
{
	long int i, n;
	
	n = 612852475143;
	for (i = 2; i <= 2; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("lu\n", i);
	return (0);
}



