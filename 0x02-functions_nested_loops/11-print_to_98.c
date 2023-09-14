#include "main.h"
/**
 * print_to_98 - print int to 98 count
 *	separated by comma. followed
 *	by space should be printed by
 *	order
 * @n: input
 *
*/
void print_to_98(int n)
{
	int n;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
