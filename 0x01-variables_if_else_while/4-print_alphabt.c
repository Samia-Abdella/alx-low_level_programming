#include <stdio.h>

/*
 * main - prints the alphabets in lower case except for 'q' and 'e'
 * Return - 0 (Always Successful)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
