#include <stdio.h>

/**
 * print_diagonal - function Draws a diagonal line on the terminal
 * @n: function parmeter
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				putchar('\\');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
