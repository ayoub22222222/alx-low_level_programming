#include "main.h"
/**
 * more_numbers - give number for 0 to 9 ten time
 *
 * Return: return 0 to 10 ten timee
*/
void more_numbers(void)
{
	int num;
	int r;
	int count;

	for (r = 1; r <= 10; r++)
	{
	for (count = 0; count <= 14; count++)
	{
	num = count;
	if (count > 9)
	{
	putchar(1 + 48);
	num = count % 10;
	}
	putchar(num + 48);
	}
	putchar('\n');
	}
}
