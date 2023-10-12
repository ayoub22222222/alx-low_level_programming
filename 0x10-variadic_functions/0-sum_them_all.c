#include "variadic_functions.h"
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
	int x;

	sum = 0;


	for (i = 0; i < n; i++)
	{
	x = va_arg(args, int);
	sum += x;
	}
	va_end(args);
	return (sum);
}
