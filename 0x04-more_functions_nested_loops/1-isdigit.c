#include "main.h"

/**
 * _isdigit - check if a digit is between 0-9
 * @c: number in ascii
 * Return: value 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
