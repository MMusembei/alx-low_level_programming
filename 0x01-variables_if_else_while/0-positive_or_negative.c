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
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	if (a > 0)
		printf("%d is a postive\n", a);
	else if (a == 0)
		printf("%d is zero\n", a);
	else if (a < 0)
		printf("%d is negative\n", a);
	return (0);
}
