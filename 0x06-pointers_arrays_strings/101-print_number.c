#include "main.h"

/**
 * print_number - convert Int to str
 * @n: input int
 * Return: void
 */
void print_number(int n)
{
	int i, j;
	int len;
	int mux;
	int out;

	len = 0;
	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}
	i = n;
	if (n == 0)
	{
		_putchar('0');
	}
	else 
	{
		while (i / 10 != 0)
		{
			len++;
			i /= 10;
		}
		mux = 1;
		for (j = 1; j <= len; j++)
			mux *= 10;
		for (j = 0; j <= len; j++)
		{
			out = n / mux;
			_putchar(out + '0');
			n -= (mux * out);
			mux /= 10;
		}
	}

}


