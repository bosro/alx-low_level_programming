#include "main.h"

/**
 * _islower - funtion to check lowercase
 *
 * @c: parameter to be printed
 *
 * Return: returns 1 if its lowercase
 * or 0 otherwise
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
