#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a str to uppercase
 * @n: pointer
 * Return: the resulting str
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i])
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] += ('A' - 'a');
		i++;
	}
	return (n);
}

