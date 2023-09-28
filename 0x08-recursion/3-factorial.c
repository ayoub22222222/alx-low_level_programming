#include "main.h"
/**
 * factorial - is a	function that take one parametter as an integer
 * @n: integer number
 * Return: return n factorial number
 */
int factorial(int n)
{

	if (n == 1)
		return (n);
	if (n < 0)
		return (n);
	else
		return (n * factorial(n - 1));
}
