#include "main.h"
/**
 * _pow_recursion - function that raise the power of a number
 * @x: integer number one
 * @y: intger number two
 * Return: return the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
