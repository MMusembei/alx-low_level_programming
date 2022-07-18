#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locs the substr
 * @haystack: str to search in
 * @needle: substr to look for
 *
 * Return: pointer to the beginning of the located substring
 * and NULL if the substr is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

