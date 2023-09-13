#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: this code generate a randome number print_last_digit
 *
 * Return: always (0) for success
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
