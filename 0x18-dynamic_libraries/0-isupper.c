#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if c is uppercase chararcter
 * @c: input for alphabet
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
