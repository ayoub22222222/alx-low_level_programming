#include "main.h"
/**
 * print_square - print line
 * @size: n is a number that you will take to print the line
 * Return: print the number of line giving by n number
*/
void print_square(int size)
{
	int checker;

	if (size <= 0)
	_putchar('\n');
	else
	{
	for (checker = 1; checker <= size; checker++)
	_putchar('#');
	_putchar('\n');
	}
}
