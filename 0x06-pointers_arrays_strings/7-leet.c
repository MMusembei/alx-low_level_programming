#include "main.h"

/**
 * leet - encodes a str in 1337
 * @s: str to be encoded
 * Return: the resulting str
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtT1L";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (S);
}

