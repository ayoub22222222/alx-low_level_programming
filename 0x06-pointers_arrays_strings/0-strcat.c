#include "main.h"
/**
 * _stract - function that take two argument
 * @dest: is array pointer
 * @scr: its also an array
 * Return: concantinate two string
*/
char *_stract(char *dest, char *scr)
{
	int a, a2;

	a = 0;

	while (dest[a])
		a++;
	for (a2 = 0; scr[a2]; a2++)
		dest[a++] = scr[a2];

	return (dest);

}
