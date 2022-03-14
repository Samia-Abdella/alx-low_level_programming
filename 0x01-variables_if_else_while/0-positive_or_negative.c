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
	if(n > 0)
		printf("%d is a positive number\n");
	else if(n ==0)
		printf("%d is zero\n");
	else
		printf("%d is a negative number\n");
	return (0);
}
