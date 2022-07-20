#include "main.h"

/**
 * _strlen_recursion - returns the len of a str
 * @s: str to calc the len of
 * Return: length of str
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
