#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 *
 * @c: parameter o be checked
 *
 * Return: return 0 if an alphabet and
 * 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
