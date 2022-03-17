#include "main.h"

/**
 * _isalpha - checksether c is a letter or not
 * @c: letter to be checked
 * Return: 1 (Success) and 0 (failure)
 */

int _isalpha(int c)
{
	return (c >= 65 && c <= 90 || c >= 92 && c <= 122);
}
