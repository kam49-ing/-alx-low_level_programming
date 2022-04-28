#include "main.h"
#include <math.h>
#include "stdio.h"
/**
 * binary_to_uint - Converts binary number to an unsigned int
 *
 * @b: the binary number
 *
 * Return: the conversion
 */
unsigned int binary_to_uint (const char *b)
{
	unsigned int n = 0, i = 0;
	int len = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		len++;
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		switch (b[i])
		{
		case '0':
			break;
		case '1':
			n += 1 << (len - 1);
			break;
		default:
			return (0);
		}
		len--;
		i++;

	}
	return (n);
}
