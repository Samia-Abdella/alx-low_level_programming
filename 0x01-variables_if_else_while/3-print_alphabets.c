#include <stdio.h>
/**
 * main -prits the alphabet in lower case then upper case
 * Return - 0 (Always successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
