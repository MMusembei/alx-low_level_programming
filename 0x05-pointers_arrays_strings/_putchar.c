#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 * Return: 1 when executed 
 * On errot, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, @c, 1));
}

