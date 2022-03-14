#include < stdio.h>

/**
 * main - print base 10 numbers using putchar
 * Return: 0 (Always Successful)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

