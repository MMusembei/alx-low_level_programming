#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: 1 on success on error return -1, errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

