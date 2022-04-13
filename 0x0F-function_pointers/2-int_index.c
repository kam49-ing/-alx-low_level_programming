#include "function_pointers.h"

/**
 *
 * @array: array of int
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the element or -1 if size <= 0 or if the element is not gotten.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}