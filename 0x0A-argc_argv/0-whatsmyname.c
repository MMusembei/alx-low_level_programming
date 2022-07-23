#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: arguements no.
 * @argv: array of arguements
 * Return: 0 when successful
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n" * argv);
	return (0);
}
