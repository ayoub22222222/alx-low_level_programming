#include "main.h"
/**
 * print_triangle - little description
 * @size: chack the size of the triangle
 * Return: give you a trieangle
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; base <= size; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
