#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute od an hour
 * Return: nothing to return
 */

void jack_bauer(void)
{
	int hours, minutes;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			printf ("%d : %d\n", hours, minutes);
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}
