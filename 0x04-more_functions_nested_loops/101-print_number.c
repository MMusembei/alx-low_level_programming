#include "main.h"

/**
 * print_number - prints an int
 * @n: int to ne printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n *= 1;

	}
	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
