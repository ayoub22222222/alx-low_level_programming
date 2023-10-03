#include <stdio.h>
/**
 * main - Enrty point
 * @argc: argument counter
 * @argv: argument vector
 * Return: return return the the ellement passe in it
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		if (i != 0)
		printf("%s\n", argv[i - 1]);
	return (0);
}
