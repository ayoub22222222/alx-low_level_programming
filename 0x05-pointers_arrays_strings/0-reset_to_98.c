#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - take a variable that point to an integer
 * @n: intger value
 * Return: take a poiter that point to inetger an assigne it to number 98
*/
int reset_to_98(int *n)
{
	int var;
	n = &var;
	*n = 98;

	return (0);
}
