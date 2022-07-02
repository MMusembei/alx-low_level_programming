#include <stdio.h>

/**
 * main - Print numbers of base 16 in lowercase followed by a new line
 * Return: 0 when executed
 */

int main(void)
{
	int i;
	char az;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (az = 'a'; az <= 'f'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
