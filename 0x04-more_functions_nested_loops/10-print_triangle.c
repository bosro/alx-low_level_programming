#include <stdio.h>

/**
 * print_triangle - function that prints a triangle
 * @size: function parameter
 * Return: always 0
 */

void print_triangle(int size)
{
	int  i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = size - i; k > 0; k--)
			putchar(' ');
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
