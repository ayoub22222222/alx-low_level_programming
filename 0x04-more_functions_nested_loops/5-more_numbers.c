#include "main.h"
/**
 * more_numbers -give number for 0 to 9 ten time
 * Return: return 0 to 10 ten timee
*/
void more_numbers(void)
{
	int a;
	int i;

	a = 0;
	while (a < 10)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i + '0');
	_putchar('\n');
	++a;
	}
}
