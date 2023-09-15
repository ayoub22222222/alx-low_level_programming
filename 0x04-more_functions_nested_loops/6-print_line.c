#include "main.h"
/**
 * print_line - print line
 * @n: n is a number that you will take to print the line
 * Return: print the number of line giving by n number
*/
void print_line(int n)
{
	int checker;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (checker = 1; checker <= n; checker++)
			_putchar('_');
		_putchar('\n');
	}
}
