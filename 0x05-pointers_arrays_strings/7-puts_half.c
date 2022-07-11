#include "main.h"

/**
 * puts_half - prints half a string followed by a newline
 * @str: str to be printed
 */
void puts_half(char *str)
{
	int len, m, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (m = (len - 1) / 2; m < len - 1; m++)
		{
			_putchar(str[m + 1]);
		}
	}
	_putchar('\n');
}

