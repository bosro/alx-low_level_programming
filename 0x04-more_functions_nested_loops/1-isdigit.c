#include <stdio.h>

/**
 * _isdigit - function that checks for digit
 * @c: parameter function
 * Return: returns 1 if a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
