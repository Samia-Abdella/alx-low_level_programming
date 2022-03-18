#include "main.h"

/* times_table - prints the time table from 0 to 9
 * Return: nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int product = i * j;

			_putchar(',');
			_putchar(' ');

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product);
			}
			else
			{
				_putchar(product / 10);
				_putchar(product % 10);
			}
			_putchar('\n');
		}
	}
}
