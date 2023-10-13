#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - variadic function
 * @separator: string to be printed between numbers
 * @n: int number
 * @..." infinit number of parametter
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

