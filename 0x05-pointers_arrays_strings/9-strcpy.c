#include "main.h"

/**
 * _strcpy - copies the string pointed to the src
 * Include the teminating null byte (\0)
 * to the buffer dest pointed
 * @dest: pointer to the buffer in which we copy the str
 * @src: str to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src);
{
	int len, j;
	 
	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	
	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}

	dest[j] = '\0';

	return (dest);
}
