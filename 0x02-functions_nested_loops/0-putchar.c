#include <main.h>
#include <stdio.h>

/**
 * main - prints _putchar then a newline
 * Return: on success print
 */

int main(void)
{
	char text[] = '_putchar';
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
