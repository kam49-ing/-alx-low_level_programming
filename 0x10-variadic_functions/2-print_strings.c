#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by new line
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the parameter
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char*));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
