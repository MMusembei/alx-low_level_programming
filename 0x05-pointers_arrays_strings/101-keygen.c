#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generated the random valid
 * password for the the 101 crackme file
 * Return:0 when successful.
 */
int main(void)
{
	int pw[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pw[i] = rand() % 78;
		sum += (pw[i] + '0');
		putchar(pw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;

		}
	}

	return (0);
}

