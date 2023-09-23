#include "main.h"
/**
 * string_toupper - function take string as an argument
 * @str: string input
 * Return: change all lowwer case of a given string into upper case
*/
char *string_toupper(char *str)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
