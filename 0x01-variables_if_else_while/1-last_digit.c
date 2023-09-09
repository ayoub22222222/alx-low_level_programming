#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Desription: this code generate a randome number
 *
 *Return: always (0) for success
*/
int main(void)
{
	int n;
	int results;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	results = n % 10;
	/* your code goes there */
	if (results > 5)
		printf("Last digit of %d is %d and is greater than 5", n, results);
	else if (results < 6 && results != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, results);
	else if (results == 0)
		printf("Last digit of %d, is %d and is 0", n, results);

	return (0);
}
