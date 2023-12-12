#include "main.h"
/**
 * _strncpy - function that take three argument
 * @dest: is a parametter array
 * @src: its an argumment that take an array element
 * @n: its a variable n
 * Return: copy a string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
