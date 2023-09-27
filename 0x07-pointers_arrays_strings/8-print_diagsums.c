#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function take two param pointer and varaiable
 * @a: pointer that point int an adress memory
 * @size: take a size as var
 * Return: always 0 (Success).
 */
void print_diagsums(int *a, int *size)
{
	int i;

	unsigned int s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
