#include "_putchar.c"
#include <string.h>

/**
 * main - prints _putchar followed by a new line
 * Return: 0 (Always Successful)
 */

int _putchar(char c);

char* printing (char* string)
{
	char* result;
	for (int c; c < strlen(string); c++)
	{
		result = _putchar(c);
	}
	result = result + _putchar('\n');
	return (result);
}

int main(void)
{
	printing("_putchar");
	return (0);
}
