#include "main.h"
/**
 * print_line - print line
 * @n: n is a number that you will take to print the line
 * Return: print the number of line giving by n number
*/
void print_line(int n)
{
	int b = 1;

	if (n <= 0)
		_putchar('\n');

	do {
		if (n > 0)
		_putchar('_');
		++b;
	} while (b <= n);
	_putchar('\n');
}
