#include <stdio.h>

/**
 * print_numbers - prints the digits 0 to 9
 * Return: alway 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
}
