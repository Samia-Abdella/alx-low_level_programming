#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: the parameter to be checked
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
