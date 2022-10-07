#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _puts - prints a string
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}