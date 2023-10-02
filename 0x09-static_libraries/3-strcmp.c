#include "main.h"
/**
 * _strcmp - function that take two argument as a pametter
 * @s1: input string number1
 * @s2: input string number2
 * Return: compare two string
*/
int _strcmp(char *s1, char *s2)
{
	int var = 0;

	while (*s2)
	{
		if (*s1 != *s2)
		{
			var = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (var);
}
