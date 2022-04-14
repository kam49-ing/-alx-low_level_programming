/**
 *
 * sum_them_all - sum an unknown number of integers
 * @n: first parameter
 * ...: variadics parameters
 *
 * Return: 0 if n <= 0, the sum of parameters otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	int i;
	
	va_start(ap, count);

	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

