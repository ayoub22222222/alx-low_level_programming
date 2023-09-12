#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int ch;
	int count = 0;

	while (count <= 9)
	{
	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
	count++;
	}
}
