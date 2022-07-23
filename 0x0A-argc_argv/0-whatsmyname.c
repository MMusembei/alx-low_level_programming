#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: arguements no.
 * @argv: array of arguements
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc -1]);
	return (0);
}
