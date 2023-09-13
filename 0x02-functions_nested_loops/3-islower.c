#include "main.h"

/**
 * _islower - function to check is character
 *
 * @c: checks the input fuction
 *
 * Return: return 1 if 'c' is lowercase
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
