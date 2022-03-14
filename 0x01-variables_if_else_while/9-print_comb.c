#include <stdio.h>

/**
 * main - prints all possible combination of single digits
 * Return: 0 (Always Successful)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
