#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *j;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, char *);

		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(ap);
}
