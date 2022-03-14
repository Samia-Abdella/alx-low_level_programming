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
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
