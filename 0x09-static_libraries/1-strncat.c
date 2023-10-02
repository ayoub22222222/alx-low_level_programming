#include "main.h"
/**
 * _strncat - function that take two argument
 * @dest: is array pointer
 * @src: is number of the element of an array
 * @n: represent byte from src
 * Return: concatinate two string together
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);
}
