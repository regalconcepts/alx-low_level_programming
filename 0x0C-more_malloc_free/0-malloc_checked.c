#include "main.h"

/**
 * malloc_checked - this will cause normal process termination with value 98
 *
 * @b: the allocated memory
 *
 * Return: this is a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;


	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
