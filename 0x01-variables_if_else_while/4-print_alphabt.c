#include <stdio.h>

/**
 * main - Print the alphabet in lowercase except from q and e 
 * Return: 0 when correctly executed
 */

int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}


