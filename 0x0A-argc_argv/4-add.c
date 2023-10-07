#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: return successs
*/
int main(int argc, char *argv[])
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; i <= argc; i++)
		if (argc != 0)
			counter += argv[i];
	return (counter);
}
