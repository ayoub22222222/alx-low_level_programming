#include "main.h"
/**
 * _puts_recursion - function that take on arg as a parametter
 * @s: variable that take a string as a value
 * Return: return a sequence as a string
 */
void _puts_recursion(char *s)
{
	if (*s <= '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
