#include "main.h"
/**
 * _strspn - this is a function that take two var as parameter
 * @s: is a pointer
 * @accept: is a pointer
 * Return: return the length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	char a = accept;

	while (s++)
	{
	while (accept++)
	if ((s - 1) == (accept - 1))
	{
	j++;
	break;
	}
	if (!(--accept))
	break;
	accept = a;
	}
	return (c);
}
