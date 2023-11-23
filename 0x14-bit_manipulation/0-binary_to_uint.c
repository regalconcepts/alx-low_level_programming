#include "main.h"

/**
 * binary_to_uint - this function converts a binary no. to an unsigned int.
 * @b: a pointer to a string containing a binary no.
 *
 * Return: unsigned int with decimal value of binsry no., or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
