#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * Return:  nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (int i = n; i <= 98; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

