#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if char is upper or lowercase
 * @c: char in ascii
 * Return: value 0 if false and 1 if true
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
