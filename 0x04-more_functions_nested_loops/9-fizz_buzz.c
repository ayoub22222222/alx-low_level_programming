#include "main.h"
/**
 * main - entry point
 *
 * description: this function is generate number from 0 to 100
 *
 * Return: if the number divisible by 2 and 5 its print fizzbuzz
*/
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	putchar(' ');
	}
	else if (i % 3 == 0)
	{
	printf("Fizz");
	putchar(' ');
	}
	else if (i % 5 == 0)
	{
	printf("Buzz");
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
