#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if c is digit  chararcter
 * @c: input for digit
 * Return: 1 if its digit, 0 if not
*/
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
