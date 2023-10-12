#include "variadic_functions.h"

/**
 * sum_them_all - vardiac function that take many argument
 * @n: constant int
 * @...: the inlimited number of argument
 * Return: sum values
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list args;

	if (!n)
	return (0);
	va_start(args, n);
	while	(i--)
	s += va_arg(args, int)
	va_end(args);
	return (s);
}
