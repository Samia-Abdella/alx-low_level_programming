#include "main.h"

/**
 * times_table - prints the time table from 0 to 9
 * Return: nothing
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k  = i * j;

			_putchar(',');
			_putchar(' ');

			if (k < 10)
			{
				_putchar(' ');
				_putchar(k);
			}
			else
			{
				_putchar(k / 10);
				_putchar(k % 10);
			}
			_putchar('\n');
		}
	}
}
