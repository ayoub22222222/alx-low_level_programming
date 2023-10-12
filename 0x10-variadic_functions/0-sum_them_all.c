#include "variadic_functions.h"
/**
 * sum_them_all - vardiac function that take many argument
 * @n: constant int
 * Return: sum values
*/
int sum_them_all(const unsigned int n, ...)
{


	va_list args;

	va_start(args, n);
	int i;

	i = n;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);

	while (i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
