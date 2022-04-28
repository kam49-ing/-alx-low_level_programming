#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given position
 *
 * @n: the number
 * @index: index of the bit to be returned
 *
 * Return: 0, 1 or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, idx = 31;

	while (idx > 0)
	{
		if (i == index)
			return (n & 1);
		idx--;
		i++;
		n >>= 1;
	}
	return (-1);
}
