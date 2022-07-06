#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to be printed
 *
 * Return: 1 when executed well
 * On error, -1 is outputted and errno set appriately
 */

int  _putchar(char c)
{
	return (write(1, &c, 1));

}
