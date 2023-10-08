#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that take two variables as param
 * @nmemb: int
 * @size: int
 * Return: allocate a memory for an ar
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;

	if (!nmemb || !size)
	return (NULL);
	calloc = malloc(nmemb * size);
	if (!calloc)
	return (NULL);
	nmemb *= size;
	while (nmemb--)
	calloc[nmemb] = 0;
	return (calloc);
}
