#include "main.h"
/**
 * leet - function that take pointer c as an param
 * @c: input pointer
 * Return: encode integer 1337
*/
char *leet(char *c)
{
	char *pc = c;
	char items[] = {'A', 'E', 'O', 'T', 'L'};
	int number[] = {4, 3, 0, 7, 1};
	unsigned int j;

	while (*c)
	{
		for (j = 0; j < sizeof(items) / sizeof(char); j++)
		{
			if (*c == items[j] || *c == items[j] + 32)
			{
				*c = 48 + number[j];
			}
		}
		c++;
	}
	return (pc);
}
