#include "main.h"

/** 
 * _isupper - Check if a  char is upper or lower
 * @c: char in ascii
 * Return: return 0 if false and 1 for true
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
