#include "main.h"

/**
 * _isalpha - checksether c is a letter or not
 * @c: letter to be checked
 * Return: 1 (Success) and 0 (failure)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		if (c >= 65 && c<= 90)
		{
			return (1);
		}
	}
	return(0);
}
