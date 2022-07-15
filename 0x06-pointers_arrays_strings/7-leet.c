#include "main.h"

/**
 * leet - encodes a str in 1337
 * @n: str to be encoded
 * Return: the resulting str
 */
char *leet(char *n)
{
	int i, j;
	char s1[10] = "aAeEoOtT1L";
	char s2[10] = "4433007711";

	i = 0;
	while (n[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
				n[i] = s2[j];
		}
	i++;
	}
	return (n);
}

