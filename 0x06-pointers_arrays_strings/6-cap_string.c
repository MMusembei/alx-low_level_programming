#include "main.h"

/**
 * cap_string - capitalize every word of a string
 * @n: inp value
 * Return: the resulting str
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] += ('A' - 'a');
	}
	i = 0;
	while (n[i])
	{
		switch (n[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '"':
			case '?':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] += ('A' - 'a');
				}
		}
	i++;
	}
	return (n);
}

