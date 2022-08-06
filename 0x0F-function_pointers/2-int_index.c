#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: array to search in
 * @size: array size
 * @cmp: pointer to the comparing fxn
 * Return: index of the 1st element for which the cmp fxn does not return 0
 * or -1 if no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
