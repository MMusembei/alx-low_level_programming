#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 * Return: Always 1 when executed 
 * On error, return -1 and errno set appropriately
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}

