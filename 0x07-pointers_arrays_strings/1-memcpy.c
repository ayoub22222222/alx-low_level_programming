#include "main.h"
/**
 * _memcpy - this function take tree param as a variable
 * @dest: its a pointer that point into an adress memory
 * @src: pointer that point into a memory adress
 * @n: variable n that take a number
 * Return: copy a memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int q = n;

	for (; j < q; j++)
	{
	dest[j] = src[j];
	n--;
	}
	return (dest);
}
