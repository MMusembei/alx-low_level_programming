#include <main.h>

/**
 * _putchar - Writes the char to stdout
 * @c: The char to display
 *
 * Return: on success print 1
 * On error, -1, and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
