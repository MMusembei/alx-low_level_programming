#include <stdio.h>

/**
 * main - print all the combinations of a digit separated by commas and space
 * Return: 0 when executed
 */

int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
		if  (j != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
