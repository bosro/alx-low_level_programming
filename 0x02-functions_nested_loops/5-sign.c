#include "main.h"


/**
 * print_sign - checks and print sign
 *
 * @n: function parameter tat checks the value
 * Return: return 1 if + and 0 if equals to 0
 * otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
