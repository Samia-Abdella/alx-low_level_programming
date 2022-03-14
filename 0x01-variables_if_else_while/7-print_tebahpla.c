 #include <stdio.h>

/**
 * main - prints the alphabet in reverse order in lower case
 * Return: 0 (Always Successful)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
