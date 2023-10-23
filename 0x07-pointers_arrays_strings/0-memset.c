#include "main.h"

/**
 * _memset - this fills a memoryblock with a specific value.
 * @s: starting address of memory block
 * @b: desired value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
