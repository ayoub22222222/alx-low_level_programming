#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - vardiac function that take many argument
 * @n: constant int
 * @...: the inlimited number of argument
 * Return: sum values
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i;
	int sum;
	int x;

	sum = 0;
	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	x = va_arg(args, int);
	sum += x;
	}
	va_end(args);
	return (sum);
}
