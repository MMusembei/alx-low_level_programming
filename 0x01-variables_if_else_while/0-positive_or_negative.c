#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -assigns a rand number to int every a time
 * it runs then prints
 * Return: 0 returned when correctly executed
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is a postive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
