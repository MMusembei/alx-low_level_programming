#include "main.h"

/**
 * _atoi - convert string to int
 * @s: str to be converted
 * Return: the int converted from the str
 */
int _atoi(char *s)
{
	int i, d, n, f, len, num;

	i = 0;
	d = 0;
	n = 0;
	f = 0;
	len = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '_')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (d % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}



