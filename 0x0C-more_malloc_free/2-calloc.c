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
	int i;
	void *pnmemb;

	if (nmemb == 0 || size == 0)
	return (NULL);


	size_t total_size = nmemb * size;

	pnmemb = malloc(total_size);

	if (pnmemb == NULL)
	exit(EXIT_FAILURE);


	for (i = 0; i < total_size; i++)
	((char *)pnmemb)[i] = 0;

	return (pnmemb);
}
