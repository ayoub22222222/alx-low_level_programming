#include "main.h"
/**
 * print_square - print line
 * @size: n is a number that you will take to print the line
 * Return: print the number of line giving by n number
*/
int  print_square(int size)
{
	int row;
	int column;
	int size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
