#include "main.h"
#include <limits.h>

/**
 * malloc_checked - allocates memory to malloc
 * b: number of bytes to be allocated
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void* p;
	p = malloc(sizeof(b));
	if (p == NULL)
		exit(98);
	return (p);
}
