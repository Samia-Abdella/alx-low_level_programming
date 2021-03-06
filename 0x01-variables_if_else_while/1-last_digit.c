#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point prints the statement in quotes to the standard error
 *
 * Return: The program returns a one
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (n < 6)
	{
		printf("Last digit of %d ", n);
		printf("is %d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}
