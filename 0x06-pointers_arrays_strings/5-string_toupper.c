#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a str to uppercase
 * @s: str to modify
 * Return: the resulting str
 */
char *string_toupper(char *)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}
	return (s);
}

