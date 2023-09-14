#include "main.h"
/**
 * print_line - print line
 * @n: n is a number that you will take to print the line
 * Return: print the number of line giving by n number
*/
void print_line(int n)
{
	b = 0;

	do {
	putchar('_');
	b++;
	} while (b < n);
	putchar('\n');
}
