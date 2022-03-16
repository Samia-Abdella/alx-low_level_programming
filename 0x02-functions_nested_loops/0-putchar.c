#include "_putchar.c"

/**
 * main - prints _putchar followed by a new line
 * Return: 0 (Always Successful)
 */

int _putchar(char c);

char* printing (char* string)
{
	for (char c; c < strlen(string); c++)
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
