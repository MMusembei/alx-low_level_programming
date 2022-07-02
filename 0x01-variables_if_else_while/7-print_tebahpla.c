#include <stdio.h>

/**
 * main - Print alphabet in reverse and in lowercase
 * Return: 0 when executed
 */

int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
