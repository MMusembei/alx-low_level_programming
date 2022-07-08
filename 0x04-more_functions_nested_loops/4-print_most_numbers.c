#include "main.h"

/**
 * print_most_numbers - prints num 0 to 9 
 * Dont print 2 and 4
 * follow by a newline
 */

void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
