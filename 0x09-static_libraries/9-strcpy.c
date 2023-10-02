#include "main.h"
/**
 * _strcpy - function take two parametters
 * @dest: variable number one
 * @src: variable number tree
 * Return: somthing else
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
