#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a char in a str
 * @s: str to search
 * @c: char to find
 *
 * Return: a pointer to the 1st occurence of the char c in the str
 * Null if the char is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}

