#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void	print_alphabet_x10(void)
{
	int ch;
	int count = 0;

	while (count <= 2)
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	count++;
}
