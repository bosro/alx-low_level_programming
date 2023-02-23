#include <stdio.h>

/**
 * print_square - function that print squares
 * @size: function parameter
 * Return: always 0
 */

void print_square(int size)
{
	int  i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
