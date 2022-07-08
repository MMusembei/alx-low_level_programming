#include "main.h"
#include <stdio.h>

/**
 * main - prints the nums 0 - 100 followed by a newline
 * with 3 multiples replaced with fizz
 * 5 multiples replaced with buzz
 * both 3 and 5 multiples replaced with fizzbuss
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz ");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf(" Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz ");
		}
		
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}

	}
	printf('\n');
}
