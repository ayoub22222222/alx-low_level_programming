#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - vardiac function that take many argument
 * @n: constant int
 * Return: sum values
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);

	va_list args;

	va_start(args, n);
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < n; i++)
	{
	int x = va_args(args, int);

	sum += x;
	}
	va_end(args);
	return (sum);
}