#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic char
 * @c: the char checked
 * Return: 1 if c is a letter and 0 ow
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
