#include "function_pointers.h"

/**
 * array_iterator - execute a given function as a parameter on each element of an array
 * @array: array of int
 * @size: size of array
 * @(*action)(int): the given function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	i = 0;
	for (i = 0; i < (int) size; i++) {
		action(array[i]);
	}
}