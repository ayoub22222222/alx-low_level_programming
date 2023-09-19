#include "main.h"
/**
 * print_array - take two parametters
 * @a: the first variable
 * @n: the second variable
 * Return: a sequence of int based on the index
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%i, ", a[i]);
	printf('\n');
}

