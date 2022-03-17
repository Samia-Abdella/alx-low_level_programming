#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the parameter to be checked
 * Return: 0 
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
	}
	else if (n < 0) 
	{
		return (-1);
	}
	return (0);
}
