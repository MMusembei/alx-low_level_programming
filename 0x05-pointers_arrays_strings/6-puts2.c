#include "main.h"

/**
 * puts2 - prints 1 char out of 2
 * then a newline
 * @str: str to print the chars from
 */
void puts2(char *str)
{
	int j, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}

