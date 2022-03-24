#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the time table of the given number
 * @n: the value to get the time table for
 */

void print_time_table (int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			printf("%d ", k);
		}
	}
	_putchar('\n');
}
