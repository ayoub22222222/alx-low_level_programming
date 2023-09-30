#include "main.h"
/**
 * _strlen_recursion - function compute the len of a string
 * @s: string prametter
 * Return: return the lenght of a string
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;

	if (*s > '\0')
		counter += _strlen_recursion(s + 1) + 1;

	return (counter);
}
