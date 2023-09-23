#include "main.h"
#include "main.h"
/**
 * is_lower - function that take  j as param
 * @j: input paramtter
 * Return: generate lower case
*/
int is_lower(char j)
{
	return (j >= 97 && j <= 122);
}

/**
 * delimeter - function that take one parametter a
 * @a: input param
 * Return: return delimiter
*/


int delimeter(char a)
{
	int i;
	char del[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (a == del[i])
			return (1);
	return (0);
}

/**
 * cap_string - function that take pointer string as param
 * @s: input param
 * Return: capitalize all words
*/


char *cap_string(char *s)
{
	char *pstr = s;
	int del = 1;

	while (*s)
	{
		if (delimeter(*s))
			del = 1;
		else if (is_lower(*s) && del)
		{
			*s -= 32;
			del = 0;
		}
		else
			del = 0;
		s++;
	}
	return (pstr);
}
