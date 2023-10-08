#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that take an unsigned integer
 * @b: pararmeter intger
 * Return: return pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *pb;

	pb = malloc(b);

	if (pb == NULL)
		exit(98);
	else
		return (pb);
}
