#include "main.h"
/**
 * _strstr - function that	take tow param
 * @haystack: variable name
 * @needle: variable name
 * Return: locate the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
	break;
	}
	if (!needle[j])
	return (&haystack[i]);
	}
	return (0);
}
