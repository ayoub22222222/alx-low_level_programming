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

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (pnmemb == NULL)
		exit(NULL);
	for (i = 0; i <= nmemb; i++)
		pnmemb[i] = 0;

	return (*nmemb);
}
