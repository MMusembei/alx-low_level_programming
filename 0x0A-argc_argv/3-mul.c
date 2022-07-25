#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints number of arguements
 * @argc: arguement count
 * @argv: array of pointers to CLI arguement
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[argc - 1]) * atoi(argv[argc - 2])));
	return (0);
}
