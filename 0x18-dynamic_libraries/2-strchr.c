#include "main.h"
/**
 * _strchr - function that take two param
 * @s: is a pointer that point into an adress memory
 * @c: parametre c
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
	if (s[a] == c)
	return (&s[a]);
	}
	return (0);
}
