#include "main.h"
/**
 * _strcat - function that take two argument
 * @dest: is array pointer
 * @src: its also an array
 * Return: concantinate two string
*/
char *_strcat(char *dest, char *src)
{
	int a, a2;

	a = 0;

	while (dest[a])
		a++;

	for (a2 = 0; src[a2]; a2++)
		dest[a++] = src[a2];

	return (dest);

}
