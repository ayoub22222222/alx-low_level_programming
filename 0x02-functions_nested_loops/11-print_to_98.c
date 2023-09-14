#include "main.ih"
/**
 * print_to_98 - print int to 98 count
 *	separated by comma. followed
 *	by space should be printed by
 *	orderi
 * @n: input
 *
*/
void print_to_98(int n)
{
	int n;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	else
	{
		for (i = n; i <= 98; i++)
			{
				printf("%d", i);
				putchar(',');
				putchar(' ');
			}
	}
		putchar('\n');
	return (0);
}
