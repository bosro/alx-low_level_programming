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
	for (c = 65; c <= 122; c++)
	{
		if (c > 90)
			return (0);
		else
			return (1);
	}
	return (c);
}
