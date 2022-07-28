#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: 1st str
 * @s2: 2nd str
 * @n: s2 limit
 * Return: pointer to new space in memory or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combo;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	i++;
	combo = malloc(sizeof(*combo) * (i + n);
	if (combo == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		combo[i] = s1[i];
		i++;
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		combo[i] = s2[j];
		i++;
	}
	combo[i] = '\0';
	return (combo);
}
