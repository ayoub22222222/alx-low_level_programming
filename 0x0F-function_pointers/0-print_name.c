#include "function_pointers.h"
/**
 * print_name - entry point
 * @name: char parametter
 * @f: calback function
 * Return: pint the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

}
