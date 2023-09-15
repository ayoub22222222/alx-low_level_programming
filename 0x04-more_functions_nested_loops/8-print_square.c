#include "main.h"
/**
 * print_square - print line
 * @size: n is a number that you will take to print the line
 * Return: print the number of line giving by n number
*/
void print_square(int size)
{
	int m = 1;

	if (size <= 0)
		_putchar('\n');

	do {
	if (size > 0)
		_putchar('#');
		++m;
	} while (m <= n);
	_putchar('\n');
}
