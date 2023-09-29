#include "main.h"
/**
 * _print_rev_recursion - function that take a param ad a pointer
 * @s: string array
 * Return: return a reverse string
 */
void _print_rev_recursion(char *s)
{
	if (*s >= '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
