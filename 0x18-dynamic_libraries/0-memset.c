#include "main.h"
/**
 * _memset - take a tree param as variable
 * @s: is a pointer that point into a char memory adress
 * @b: is a variable that take a character
 * @n: its a variable that take the number of bytes
 * Return: this function take the char b and replace it into the memory adrees
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
