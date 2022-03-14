#include <stdio.h>

/*
 * main - Entry point prints the statement in the quotes
 *
 * Return: return a zero if successful non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n" , sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
