#include <stdio.h>

/**
 * main - print base 16 numbers
 * Return: 0 (Always Successful)
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i <10; i++)
		putchar(i);
	
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
