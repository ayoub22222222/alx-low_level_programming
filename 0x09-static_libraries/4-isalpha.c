#include "main.h"
/**
 * _isalpha - check the character letter
 *
 * @c: takes input from other function
 *
 * Return: always (0) for success
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
