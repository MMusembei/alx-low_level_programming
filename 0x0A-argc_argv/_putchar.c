#include <unistd.h>

/**
 * _putchar - writes the char c to stdout 
 * @c: The char to print
 * Return: 1 on success
 * On error, -1 is returned and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

