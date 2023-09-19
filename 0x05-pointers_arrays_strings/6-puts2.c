#include "main.h"
/**
 * puts2 - function take one arguments
 * @str: input
 * Return: return a results
 *
*/
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *y = str;
	int d;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for (d = 0; d <= b; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}

	}
	_putchar('\n');
}
