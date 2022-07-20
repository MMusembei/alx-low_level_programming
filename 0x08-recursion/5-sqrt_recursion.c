#include "main.h"

/**
 * sqrtChecker - computes the sqrt while continuely doing binary search
 * @a: intial num
 * @b: last num within the limit of nums
 * @m: given num.
 * Return: 1 if not found else sqrt
 */
int sqrtChecker(int a, int b, int m)
{
	long int guess;

	if (b >= a)
	{
		guess = a + (b - a) / 2;
		if (guess * guess == m)
			return (guess);
/* then do a binary search*/
		if (guess * guess > m)
			return (sqrtChecker(a, guess - 1, m));
		if (guess * guess < m)
			return (sqrtChecker(guess + 1, b, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: the num to calc sqrt of
 * Return: the resulting sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrtChecker(1, n, n));
}
