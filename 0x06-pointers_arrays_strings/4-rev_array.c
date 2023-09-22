#include "main.h"
/**
 * reverse_array - function that take two argument
 * @a: is array pointer
 * @n: is number of the element of an array
 * Return: revers array of integer
*/
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = n - 1; i >= 0; --i)
	{
		if (i == 0)
			printf("%i ", a[i]);
		else
			printf("%i", a[i]);
	}
	_putchar('\n');
}
