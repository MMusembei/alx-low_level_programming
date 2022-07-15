#include "main.h"

/**
 * rot13 - encodes a str in tot13
 * @s: str to be encoded
 * Return: the str output
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
	j = 0;
		while (a[j])
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		j++;
		}
	i++;
	}
	return (s);
}

