#include <stdio.h>

/**
 * main - prints the alphabet in lower case using only putchar function
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char c;

	for (c = 'a; c <= 'z';  c++)
		putchar(c);
	putchar("\n");
	return (0);
}
