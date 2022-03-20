#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: paramater to be added
 * Return:  nothing
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i / 10);
			_putchar(i % 10);
		}
		_putchar('\n');
	}
}

