#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that take two variables as param
 * @nmemb: int
 * @size: int
 * Return: allocate a memory for an array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *pnmemb;

	pnmemb = malloc(sizeof(int) * size);

	if (nmemb == 0 or size == 0)
		return (NULL);
	if (pnmemb == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		(pnmemb + 1) = 0;
	return (*pnmemb);
}
