#include "function_pointers.h"

/**
 *
 * @param array: array of int
 * @param size: size of the array
 * @param cmp: a pointer to the function to be used to compare values
 *
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	int comparison;
	if (size<0)
	{
		return (-1);
	}
	for (i=0; i<size; i++)
	{
		comparison = cmp(array[i]);
		if (comparison != 0)
		{
			return (i);
		}
	}
	return (-1);
}