#include "main.h"
/**
 * rev_string - function call
 * @s: variable name
 * Return: a a collection	of character
 *
*/
void rev_string(char *s)
{
	int l,
	int i;
	char j;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < 1 / 2; i++)
	{
		j = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = j;
	}
}

