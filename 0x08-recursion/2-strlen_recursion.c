#include "main.h"

/**
 * _strlen_recursion - This returns the length of a string
 * @s: This is the string to be measured
 * Return: This is the length of the string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		return (1 + _strlen_recursion(s + 1));
	}
	return (longit);
}
