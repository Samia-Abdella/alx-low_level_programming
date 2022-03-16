#include "_putchar.c"
#include <string.h>

/**
 * main - prints _putchar followed by a new line
 * Return: 0 (Always Successful)
 */

int _putchar(char c);

char* printing (char* string)
{
	for (int c; c < strlen(string); c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

int main(void)
{
	printing("_putchar");
	return (0);
}
