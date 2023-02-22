#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @x: parameter of the function
 *
 * Return: returns last digit
 */

int print_last_digit(int x)
{
	int j;

	j = x % 10;
	if (x < 0)
		j = -j;
	return (j);
}
