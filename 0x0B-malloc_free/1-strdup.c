#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that take string as param
 * @str: paramtter int
 * Return: success
*/
char *_strdup(char *str)
{
	int i;
	int size = sizeof(str) + 1;
	char *pstr = malloc(sizeof(char) * size);

	if (pstr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		pstr[i] = str[i];
	return (pstr);
}
