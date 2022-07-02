#include <stdio.h>

/**
 * main - prints alphabet in lower then upppercase
 * Return: 0 when well executed
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	for (az = 'A'; az <= 'Z'; az++)
		putchar(az);
	putchar('\n');
	return (0);
}
