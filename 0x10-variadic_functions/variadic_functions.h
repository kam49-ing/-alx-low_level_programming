#ifndef _VARIADIC_HEADER_
#define _VARIADIC_HEADER_

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_comma(const char * const format, int i, int c);

#endif