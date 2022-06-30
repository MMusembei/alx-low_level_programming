#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a specific string given
 * followed by a newline to the standard error
 * Return: Correctly executed return 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
