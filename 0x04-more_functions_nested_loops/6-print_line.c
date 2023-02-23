#include <stdio.h>

/**
 * print_line - a function that draws a straight line
 * @n: function parameter
 * Return: alway 0
 */

void print_line(int n)
{
	int i;

	for (i = -4; i <= n; i++)
		if (n <= 0)
			putchar('\n');
		else
			putchar('_');
	putchar('\n');
}
