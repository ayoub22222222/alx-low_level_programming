#include "main.h"
#include <stdio.h>
/**
 * print_name - entry point
 * @name: char parametter
 * @f: calback function
 * Return: pint the name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
