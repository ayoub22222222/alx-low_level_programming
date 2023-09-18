#include "main.h"
#include <stdio.h>
/**
 * swap_int - take two pointers as an integer
 * @a: the first int
 * @b: the second int
 * Return: swap two value between each others
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*a = x;
	*b = *a;
}
