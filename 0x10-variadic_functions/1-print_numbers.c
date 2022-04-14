#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: character to be printed after each number
 * @n: number of args
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}