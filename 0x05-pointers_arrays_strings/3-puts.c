#include "main.h"

/**
 * _puts - this prints a string, which is followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
