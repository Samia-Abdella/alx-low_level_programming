#include "main.h"

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int product = i * j;
			_putchar(product);
			_putchar(' ');
			_putchar('\n');
		}
	}
}