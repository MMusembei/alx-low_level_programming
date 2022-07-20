#include "main.h"

/**
 * primenumber - checks if a givennumber is a prime num
 * @n: given num
 * @m: checker num
 * Return: 1 if num is prime 0 else
 */
int primenumber(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0)
		return (0);
	return (primenumber(n, m - 1));
}
/**
 * is_prime_number - checks if a givenn number is prime
 * @n: given num
 * Return: 1 if number is prime and 0 else
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenumber(n, n  / 2));
}

