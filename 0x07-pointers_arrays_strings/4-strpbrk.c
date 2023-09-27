#include "main.h"
/**
 * _strpbrk - function that take two parameter as a pointer
 * @s: pointer that point into an adress memory
 * @accept: pointer
 * Return: searches a string for any of a set of bytes.
 */
char _strpbrk(char *s, char *accept)
{
	int a;

	while (s)
	{
	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	return (s);
	}
	s++;
	}

return ('\0');
}
