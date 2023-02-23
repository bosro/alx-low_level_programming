#include <stdio.h>

/**
 * _isupper - funtion that checks for uppercase
 *
 * @c: function parameter
 *
 * Return: returns 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
