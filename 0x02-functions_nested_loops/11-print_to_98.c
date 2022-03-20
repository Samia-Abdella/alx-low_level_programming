#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: paramater to be added
 * Return:  nothing
 */

void print_to_98(int n)
{
	int i;

	if (n = 98)
	{
		printf("%d ", n);
		_putchar('\n');
	}
	else if (n < 98)
	{
		for ( i = 0; i <= 98; i++)
		{
			printf("%d ", i);
		}
		_putchar('\n');
	}
	else
	{
		for (i = 0; i >= 98; i--)
		{
			printf("%d ", i);
		}
		_putchar('\n');
	}


	
}

