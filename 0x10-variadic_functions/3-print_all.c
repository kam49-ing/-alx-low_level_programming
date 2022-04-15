#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int c;
	char *s = NULL;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		print_comma(format, i, c);
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(ap, int));
			c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			c = 1;
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			c = 1;
			break;
		case 's':
			s = va_arg(ap, char*);

			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			c = 1;
			break;
		} i++;
	}
	va_end(ap);

	printf("\n");
}

/**
 * print_comma - prints comma after a character
 *
 * @format: the given format of the character
 *@i: Iterator for the format
 *@c: indicate if the parameter should be printed or not
 * Return: Nothing
 */
void print_comma(const char * const format, int i, int c)
{
	int j = 0;
	char *t_arg = "cifs";

	while (t_arg[j])
	{
		if (format[i] == t_arg[j] && c)
		{
			printf(", ");
			break;
		} j++;
	}
}
