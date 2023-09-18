#include "main.h"
#include <string.h>
/**
 * _puts - is a function that take pointer as parameter
 * @str: is the name of the variable
 * Return: print a string followed by new line
*/
void	_puts(char *str)
{
	char s[] = str;
	int i;

	for (i = 0; i <= strlen(s); i++)
		_putchar(s[i]);
	_putchar('\n');
}
