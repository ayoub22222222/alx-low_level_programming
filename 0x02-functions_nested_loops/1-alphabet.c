#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');

}

